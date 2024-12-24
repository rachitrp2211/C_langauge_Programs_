#include <stdio.h>
#include<string.h>
int my_strlen(char * s)
{
  char *pt = s;
  int len=0;
  while(*pt!='\0')
    {
      len++;
      pt++;
    }
      return len;
  
}
int main() {
  char s[]="Rachit";
  int l = strlen(s);
  printf("length of the string is : %d\n",l);
  return 0;
}