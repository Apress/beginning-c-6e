// Program 6.9b Converting Strings to Numerical Values
#include <stdio.h>
#include <stdlib.h>     /* strtod() */
#include <stdbool.h>

int main(void)
{
	double value = 0;
	char str[] = "3.5 2.5 1.26";      // The string to be converted
	char *pstr = str;                 // Pointer to the string to be converted
	char *ptr = NULL;                 // Pointer to character position after conversion
	while(true)
	{ 
		value = strtod(pstr, &ptr);   // Convert starting at pstr
		if(pstr == ptr)               // pstr stored if no conversion...
			break;                    // ...so we are done
		else
		{
			printf(" %f", value);      // Output the resultant value
			pstr = ptr;                // Store start for next conversion
		}
	}


	return 0;
}

