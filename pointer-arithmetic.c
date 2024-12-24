#include <stdio.h>

int main() {
  int  i=2;
  int *a = &i;
  printf("address before operation of A :%u\n", a);
  a++;
  printf("address after operation of A :%u\n", a);
  
  float j=2.5;
  float *b=&j;
  printf("address before operation of B :%u\n", b);
  b++;
  printf("address before operation of B :%u\n", b);
  
  float k=2.5;
  float *c=&j;
  printf("address before operation of C :%u\n", c);
  c++;
  printf("address before operation of C :%u\n", c);
    return 0;
}