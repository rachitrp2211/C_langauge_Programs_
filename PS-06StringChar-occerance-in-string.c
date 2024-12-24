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
      ptr++;
    }  
 return count;   
}

int main(void) {
  char st[]="Rachit 22112003";
  int count = occurance(st, '2');
  printf("The Occurence is %d",count);
  return 0;
}