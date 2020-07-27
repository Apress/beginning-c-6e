// Program 3.9d XOR switching, encryption
#include <stdio.h>
#include <string.h>

int main(void)
{
  
    char key = 'C'; 
    char sentence[] = "Fibonacci allows converting miles to kms";
    int len = strlen(sentence);    //function included in string.h, String's length
  
    //encoding message (switching bits con XOR)
    printf("encoded message:\n");
    for (int i = 0; i < len; i++) 
    { 
        sentence[i] = sentence[i] ^ key;
        printf("%c", sentence[i]); 
    } 
    printf("\n\n");

    //decoding message
    printf("decoded message:\n");
    for (int i = 0; i < len; i++) 
    { 
        sentence[i] = sentence[i] ^ key;
        printf("%c", sentence[i]); 
    } 

  return 0;
}

