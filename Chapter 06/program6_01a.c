// Program 6.1a Check C11/C17 versions
#include <stdio.h>

int main(void)
{
	//this line shouldn't compile in MS Visual Studio, comment it if necessary
	printf("__STDC_VERSION__ = %d\n", __STDC_VERSION__);
	
#if defined __STDC_LIB_EXT1__
  printf("Optional functions are defined.\n");
#else
  printf("Optional functions are not defined.\n");
#endif
  return 0;
} 

