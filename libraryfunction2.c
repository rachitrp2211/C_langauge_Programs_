#include <stdio.h>
void change(int a);

int main() {
  int b = 3777 ,a = 37;
  printf("the value of b beror changing %d\n",a);
  change(b);
  change (a);
  printf("the value of b after changing %d\n",a);
  return 0;
}

void change(int a){
  a = 77;
}