// Program 3.9a swaping two integers
#include <stdio.h>

int main(void)
{
  int x = 1;
  int y = 3;
  int tmp = 0;
  
  printf("original values: ");
  printf("x = %d , y = %d", x, y);

  tmp = x;
  x = y;
  y = tmp;

  printf("\n\nswapped values: ");
  printf("x = %d , y = %d", x, y);


  return 0;
}

