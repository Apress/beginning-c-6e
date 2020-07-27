// Program 5.7a Variable Length
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	#ifdef   __STDC_NO_VLA__
	  printf("Variable length arrays are not supported.\n");
	  exit(1);
	#endif

    size_t nGrades = 0;                           // Number of grades
    printf("Enter the number of grades: ");
    scanf("%zd", &nGrades);
    int grades[nGrades];                          // Array storing nGrades values

    return 0;
}
