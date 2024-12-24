#include <stdio.h>
void printtable(int *mul,int num,int n)
{
printf("The multiplication table of %d is :\n",num);
  for (int i =0; i<n;i++)
    { 
      mul[i]=num*(i+1);
    }
  for (int i =0; i<n;i++)
    {
      printf("%d x %d = %d\n",num,i+1,mul[i]);
    }
}
int main() {
  int mul[3][10];
printtable(mul[0],2, 10);
printtable(mul[1],3, 10);
printtable(mul[2],4, 10);
  
  return 0;
}