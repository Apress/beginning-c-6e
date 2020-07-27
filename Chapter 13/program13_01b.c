// Program 13.1b _Generic macro example
#include <stdio.h>
#include <math.h>

// _Generic is not supported by Visual Studio 2019 yet. 
//(please use gcc or Pelles for this example)
#define custom_exp(x) _Generic((x), \
   double: exp, \
   float: expf, \
   long double: expl, \
   default: clone \
)(x)

//for default type:
int clone(int a) {
   return a;
}
 
int main(void)
{
   int i = 2;
   double d = 1;
   float f = 1;
   long double ld = 1;
	
   printf("double %f\n", custom_exp(d)); 
   printf("float %f\n", custom_exp(f)); 
   printf("long double %Lf\n", custom_exp(ld)); 
   printf("default %d\n", custom_exp(i));
                                            
   return 0;
}

