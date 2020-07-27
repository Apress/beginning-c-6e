// Program 13.1a Debugging using preprocessing directives
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdlib.h>

#define US 0
#define UK 1
#define France 2
#define Germany 3
#define Country US

int main(void)
{
    #if Country == US || Country == UK
       #define Greeting "Hello."
    #elif Country == France
       #define Greeting "Bonjour."
    #elif Country == Germany
       #define Greeting "Guten Tag."
    #endif
    printf_s("%s\n", Greeting );

	#if Country == US
	   #define Currency "Dollar."
	#elif Country =WrongExpression= UK
	   #define Currency "Pound."
	#elif Country == France
	   #define Currency "Euro."
	#elif Country == Germany
	   #define Currency "Euro."
	#endif
    printf_s("%s\n", Currency);


    return 0;
}

