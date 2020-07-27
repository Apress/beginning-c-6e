// Program 5.1a modifying constant array
#include <stdio.h>

int main(void)
{

  const int elo[10] = {2882, 2851, 2844, 2830, 2822, 2820, 2819, 2817, 2816, 2810};

  printf("\nELO number 1: %d\n", elo[0]);

  //it must throw a compilation error
  elo[0]++;

  
  return 0;
}
