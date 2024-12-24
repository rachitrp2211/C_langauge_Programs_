#include <stdio.h>

int main() 
{
  int mrk[5];
  int *a;
  a = mrk;
  for (int i=0;i<4;i++) 
  {
  printf("Enter the marks of student %d:",i+1);
  scanf("%d",a);  
  a++;
  }
  for (int i=0;i<4;i++) 
  {
  printf("Enter the marks of student %d:%d \n",i+1,mrk[i]);   
  }

  return 0;
}