#include <stdio.h>

int main(void) {
int mul[10],n;
  printf("Enter the Value of the table you wanted to print\n");
  scanf("%d",&n);
  for (int i =0; i<10;i++)
    { 
      mul[i]=n*(i+1);
    }
  for (int i =0; i<10;i++)
    {
      printf("%d x %d = %d\n",n,i+1,mul[i]);
    }
  return 0;
}