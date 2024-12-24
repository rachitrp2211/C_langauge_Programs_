#include <stdio.h>

int main() {
  int i = 34 ;
  int*j = &i ;
  printf("the value of i = %d\n",i);
  printf("the address of i = %d\n",*j);
  printf("the memory loacation of i = %u\n",&i);
  printf("the memory loacation of j = %u\n",j);
  printf("the memory loacation of j = %u\n",&j);
  printf("the memory loacation of j = %u\n",*(&j));
  
  return 0;
}