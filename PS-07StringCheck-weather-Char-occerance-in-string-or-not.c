#include <stdio.h>
int occurance(char *st, char c)
{
 char *ptr=st;
 int count=0;
  while (*ptr!='\0')
    {
      if (*ptr==c)
      {
      count++;
      }
      else
      {
    printf("The Character is not present in the string\n");       break; 
      }
      ptr++;
    }  
 return count;   
}

int main() {
  char st[]="Rachit 22112003";
  int count = occurance(st, '5');
  printf("The Occurence is %d",count);
  return 0;
}