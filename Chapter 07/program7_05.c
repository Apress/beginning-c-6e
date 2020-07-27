// Program 7.5 Incrementing a pointer to an array
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>

int main(void)
{
  char multiple[] = "a string";
  char *p = multiple;

  for(size_t i = 0 ; i < strnlen_s(multiple, sizeof(multiple)) ; ++i)
    printf("multiple[%zu] = %c  *(p+%zu) = %c  &multiple[%zu] = %p  p+%zu = %p\n",
                       i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
  return 0;
}
