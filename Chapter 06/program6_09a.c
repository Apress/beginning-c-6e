// Program 6.9a Converting Strings to Numerical Values
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{

  char value_str[] = "98.4";
  double value = atof(value_str);  // Convert string to floating-point

  printf("number: %f", value);

  return 0;
}

