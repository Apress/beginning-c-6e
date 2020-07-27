// Program 11.8a The operation of a union
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Horse              // Structure type definition
{
    char owner[9];
    union     // Anonymous union
    { 
        int age; 
        char height; 
    }; 
}; 
  
int main(void) 
{ 
    struct Horse rocinante; 
    
	rocinante.age = 55; 
	rocinante.height = 13; 
    strcpy(rocinante.owner, "Quixote");
  
    printf("age: %d, height: %d, owner: %s", 
	   rocinante.age, rocinante.height, rocinante.owner); 
  
    return 0; 
} 

