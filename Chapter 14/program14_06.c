//Example 14.6 simple fork

// it does not work in Windows, unless MinGW gcc is used
#include <stdio.h> 
#include <unistd.h> 
int main(void) 
{   
    printf("parent-getpid: %d\n", getpid());

	for (int j = 0; j < 4; j++)  
	{
		int c = fork(); 
		if(c==0) // if fork() return 0 then it is a child
			// 1, 4, 7, 15,... children processes
			printf("%d* child spawned -  child-getpid():%d\n", j, getpid()); 
		else 
			printf("%d. child created-fork(): %d  parent-getpid():%d\n", j, c, getpid()); 
	}
    return 0; 
} 

