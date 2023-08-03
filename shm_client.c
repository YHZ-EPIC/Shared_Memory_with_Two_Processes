#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 27

void show_error(char *str) {
	perror(str);
	exit(1);
}

int main(void) {
	int shmid;
	key_t key;
	char *shm, *s,str;
	FILE *fptr;
	
	key = 2211;
	fflush(stdin);
	if((shmid = shmget(key, MAXSIZE, IPC_CREAT | 0666)) < 0)
		show_error("shmget");
	if((shm = shmat(shmid, NULL, 0)) == (char*) -1)
		show_error("shmat");
	
	if((fptr=fopen("Copied.txt","w"))==NULL)
	{
	printf("Unable to open file");
	exit(1);
	}
	else
	{
		for(s=shm;*s!='\0';s++){
		fputc(*s,fptr);
		printf("%c",*s);}
	}
	fclose(fptr);
	*shm = '*';
	printf("\n");
	return(0);
}
