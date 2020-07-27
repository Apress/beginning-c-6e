// Program 10b Converting Strings to Numerical Values
#include <stdio.h>
#include <stdlib.h>     /* strtod */
#include <math.h>

int main(void)
{

    char c = '1';   // not a n-char-sequence (no terminating NUL)
    char *tagp = &c;
    double x = nan(tagp);


    printf(" %f", x);      // Output the resultant value

    return 0;
}

