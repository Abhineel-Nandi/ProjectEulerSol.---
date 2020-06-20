#include <stdio.h>

int main(){

  char number[]="...";

  int i;
  
  for (i = 0; i < strlen(number); i++)
    if (number[i] - 48 == 8 || number[i] - 48 == 9)
      printf ("%d", number[i] - 48);
    else
      printf (" ");
  
  return 0;
}