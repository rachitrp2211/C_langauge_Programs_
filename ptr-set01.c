#include <stdio.h>

int main() {
  int a =3;
  int *ptr= &a;
  printf("value of  A: %d\n",a);
  printf("address of is A:     %u\n",ptr);
  printf("value of is A :      %d\n",*ptr);
  return 0;
}