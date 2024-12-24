#include <stdio.h>

int main() {
  char s[]={'r','a','c','h','i','t','\0'};
  char r[]={"Rachit"};
  char *ptr  = s;
  char *ra= r;
  while(*ptr!='\0')
    {
    printf("%c",*ptr);
     ptr++;
     
    }
  while(*ra!='\0')
    {
    printf("%c",*ra);
     ra++;
    }
char c[50];
  printf("\nEnter your name :");
  scanf("%s",c);
  printf("Your namne is : %s",c);
  return 0;
}