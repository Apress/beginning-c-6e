// Program 8.4a const in a array function prototype
#include <stdio.h>

void int_out (const int array[], size_t); // Outputs the integers

void int_out (const int array[], size_t n)
{
	printf ( "The integers are:\n");
	
	for(size_t i = 0 ; i < n ; ++i)
	{
		printf("%d\n", array[i]); // Display an integer
		
		//try modifying a constant value should throw an error at compilation
		//array[i] = 3;
	}
}

int main(void)
{
	int array[] = { 2, 7, 1, 8, 2, 8 };	
	int_out(array, 6);
	
	return 0;
}

