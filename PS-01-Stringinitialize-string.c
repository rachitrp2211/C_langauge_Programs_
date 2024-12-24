#include <stdio.h>

int main() {
  char r[50];
  char r2[50];
  char c;
  int i=0;
  printf("enter the 1st string : ");
  scanf("%s",r);
  printf("Enter the 2nd String :");
  while(r[i]!='\0')
    {
      fflush(stdin);
      scanf("%c",&c);
      r2[i]=c;
      i++;
    }
  printf("The value oof the 1st string is :%s \n",r);
  printf("The value of the 2nd string is :%s",r2);

  return 0;
}