#include <stdio.h>
int sum(int a , int b);
int main() {
  int x = 4,y=6;
  printf("the value of x and y is %d and %d\n",x,y);
  printf("the sum of x and y is %d\n",sum(x,y));
  printf("the value of x and y is %d and %d\n",x,y);
  return 0;
}

int sum(int a , int b)
{
  int c;
  c = a + b;
  return c;
}