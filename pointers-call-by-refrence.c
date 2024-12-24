#include <stdio.h>
void wrongswap(int a, int b);
void swap(int *a, int *b);
int main() {
  int c=2 , d=3;
  printf("The valuue before the swap %d and %d\n",c ,d);
  // wrongswap( c, d);
  swap(&c, &d);
  printf("The value after the swap %d and %d",c, d );
  return 0;
}
void swap(int *a, int *b)
{
  int temp;
  *a = temp;
  *a = *b;
  *b = temp;
}
void wrongswap(int a, int b)
{
  int temp;
  a = temp;
  a = b;
  b = temp;
}