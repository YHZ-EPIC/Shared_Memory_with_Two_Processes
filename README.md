<font style="color:#fff; font-family: 'Bebas Neue'; 
font-size: 3.5ch">

# Implementing Shared Files Between Two Processes
## Course: Operating Systems

By Yasir Hussain

## Introduction

Inter process communication (IPC) is used for exchanging data between multiple threads in one or more processes or programs. The Processes may be running on single or multiple computers connected by a network. The full form of IPC is Inter-process communication. Advantages of using IPC in OS are Modularity, Computational Speedup and Data Sharing.
Shared Memory is a type of memory that can be shared by multiple applications or processes with the intent of providing inter-application communication or avoid redundant data copies. This is an efficient means of sharing or passing data because it removes the need to use other process like input/output (I/O). One application saves the data in shared memory, while another application may use it when found.
Message Passing allows multiple processes to read and write data to the message queue without being connected to each other. Messages are stored on the queue until their recipient retrieves them. Message queues are quite useful for inter-process communication and are used by most operating systems.

## Methodology

The project revolves around achieving interprocess communication (IPC) 
by making one process perform read operation on the shared memory variable. 
Next, the second process uses the same shared memory variable to perform read and write operations. 
Process1 and process2 are executing simultaneously, and they share the same resources. 
Process1 generates information resources being used and keeps it as a record in shared memory. 
When process2 needs to use the shared information, 
it will check in the record stored in shared memory and use the information generated by process1 execute its code segment. 
Processes can use shared memory for extracting information as a record from another process as well as for delivering any specific information to other processes. . The internet connection is also checked between the two processes via google DNS server (8.8.8.8). File sharing will be implemented between two local processes, local and host/network process.

## Features
    1.	The shm_server file reads the file and checks if it is successfully shared.
    Then it calculates the time it takes to share the file.
    2.	The net_state file defines the conditions of the status of internet connection.
    3.	The net_check file uses network process time to check the status of the internet connection.
    4.	shm_client reads the data from the shared memory and writes the in copied.txt file.

## Tools and Technologies
    1.	Oracle VM Virtual Box
    2.	Ubuntu Operating System version 18.04
    3.	Ubuntu terminal C/C++ programming language
    4.	Python graphing software

## References
https://bbs.archlinux.org/viewtopic.php?id=213878 (only the networking part)

## Conclusion 

The shm_server file writes the data in the shared memory. Then the shm_client file reads the data from the shared memory. shm_server file also keeps track of the time taken for the file transfer. The net_check file uses network process time from the google DNS server to check for internet connectivity between the 2 processes and the conditions for the internet connection are defined in the net_state file.

</font>