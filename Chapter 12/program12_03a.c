// Program 12.3a mode "x"
#define _CRT_SECURE_NO_WARNINGS
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *pfile = NULL;
  char *filename = "hello.txt";
  pfile = fopen(filename, "wx");

  if (pfile == NULL)
  {
    printf("file already exists!");
    exit(EXIT_FAILURE);
  }
  
  fclose(pfile);
 
 return 0;
}

