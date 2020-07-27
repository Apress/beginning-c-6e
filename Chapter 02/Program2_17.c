// Program 2.17  Calculating the height of a tree 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  long shorty = 0L;                         // Shorty's height in inches
  long lofty = 0L;                          // Lofty's height in inches
  long feet = 0L;
  long inches = 0L;
  long shorty_to_lofty = 0L;                // Distance from Shorty to Lofty in inches
  long lofty_to_tree = 0L;                  // Distance from Lofty to the tree in inches
  const long inches_per_foot = 12L;
 
  // Get Lofty's height 
  printf("Enter Lofty's height to the top of his/her head, in whole feet: ");
  scanf("%ld", &feet);
  printf("                                          ... and then inches: ");
  scanf("%ld", &inches);
  lofty = feet*inches_per_foot + inches; 

  // Get Shorty's height up to his/her eyes 
  printf("Enter Shorty's height up to his/her eyes, in whole feet: ");
  scanf("%ld", &feet);
  printf("                                    ... and then inches: ");
  scanf("%ld", &inches);
  shorty = feet*inches_per_foot + inches;

  // Get the distance from Shorty to Lofty 
  printf("Enter the distance between Shorty and Lofty, in whole feet: ");
  scanf("%ld", &feet);
  printf("                                       ... and then inches: ");
  scanf("%ld", &inches);
  shorty_to_lofty = feet*inches_per_foot + inches;

  // Get the distance from Lofty to the tree 
  printf("Finally enter the distance from Lofty to the tree to the nearest foot: ");
  scanf("%ld", &feet);
  lofty_to_tree = feet*inches_per_foot;

  // The code to calculate the height of the tree will go here

  // The code to display the result will go here
  return 0;

}
