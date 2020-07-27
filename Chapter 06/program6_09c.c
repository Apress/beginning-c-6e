// Program 6.9c Converting Strings to Numerical Values
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "123 234 0xAB 111011";
	char *pstr = str;
	char *ptr = NULL;							
	long a = strtol(pstr, &ptr, 0);				// Convert base 10 Values       a = 123
	pstr = ptr;									// Start is next character
	unsigned long b = strtoul(pstr, &ptr, 0);	// Convert base 10 value        b = 234L
	pstr = ptr;									// Start is next character
	long c = strtol(pstr, &ptr, 16);			// Convert a hexadecimal value  c = 171
	pstr = ptr;									// Start is next character
	long d = strtol(pstr, &ptr, 2);				// Convert binary value         d = 59

	printf("%ld %ld %ld %ld", a, b, c, d);

    return 0;
}

