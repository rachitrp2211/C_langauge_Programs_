#include<stdio.h>
int main(){ 
int i,sum=0,n=10,b=8;
for (i=0;i<=10;i++){
  printf(" \n 8 x %d  = %d",i,8*i);
  }
for (i=0;i<11;i++)
    {
      b=8*i;
      sum+=b;
    }   
printf("\nthe sum of the table is %d",sum);
return 0;
}
