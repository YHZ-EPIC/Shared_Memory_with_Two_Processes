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
	char *shm,*s;
	FILE *fptr;
	int shmid;
	key_t key;
	key = 2211;
	
	if((shmid = shmget(key, MAXSIZE, IPC_CREAT | 0666)) < 0)
		show_error("shmget");
	if((shm = shmat(shmid, NULL, 0)) == (char*) -1)
		show_error("shmat");
	s = shm;
	if((fptr=fopen("Shared.txt","r"))==NULL)
	{
	printf("Unable to open file");
	exit(1);
	}
	else
	{
		while((*s=fgetc(fptr))!=EOF){
		if(*s=='\0')
		break;
		printf("%c",*s);
		*s++;
		}
  	    fclose(fptr);
	while(*shm != '*'){
	    sleep(1);
	}
	}
	exit(0);
}
