// Program 3.9a swaping two integers
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  char letter = 0;

  printf("Enter a letter:");                // Prompt for input
  scanf("%c", &letter);                     // Read a character
  

  letter ^= ' ';                            // bitwise trick to invert text case
  printf("invert text case letter = %c\n", letter);


  letter |= ' ';                            // bitwise trick to convert to lowercase
  printf("lowercase letter = %c\n", letter);

  letter &= '_';
  printf("uppercase letter = %c\n", letter);  // bitwise trick to convert to uppercase


  return 0;
}

