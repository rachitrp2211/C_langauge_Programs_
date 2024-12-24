#include <stdio.h>
void printadd(int a)
{
  printf("the saved address of A is %u\n",&a);
}
int main() {
  int i = 3;
  printf("value of  A: %d\n",i);
  printadd(i);
  printf("value of is A :      %d\n",&i);
  return 0;
}