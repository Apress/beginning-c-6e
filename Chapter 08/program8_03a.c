// Program 8.3a using more than return inside of a function
#include <stdio.h>

double Average(int n)
{
   if (n==314)
   {
	return (double)n;
   } 
   else
   {
	return (double)n+1;
   }
	   
}


int main(void)
{
	double d = Average(315);
	
	printf("d=%f\n", d);
	
	return 0;
}

