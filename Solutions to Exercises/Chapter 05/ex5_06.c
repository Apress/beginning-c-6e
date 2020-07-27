// calculate pi - leibniz

#include <stdio.h>
int main(void)
{

  double pi_4 = 0;
  double sign = 1;
    
  for (int i = 1; i < 1000000; i += 2)
  {
    pi_4 += sign / i;
    sign = -sign;
  }
  printf("%f\n", 4 * pi_4);

  return 0;
}


