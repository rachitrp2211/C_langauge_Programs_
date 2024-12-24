#include <stdio.h>
void printtable(int *mul,int n ,int m )
{
  printf("Enter the table you need :");
  scanf("%d",&n);
  printf("Till which number you wanted the table:");
  scanf("%d",&m);
  for(int i=0 ; i<m ; i++)
  {
    mul[i]=n*(i+1);
  }  
  for (int i=0;i<m ; i++)
    {
      printf("%d x %d = %d\n",n,i+1,mul[i]);
    }
}
int main() {
int mul[100];
int n,m;
  
printtable(mul,n,m);
  return 0;
}
//SHER