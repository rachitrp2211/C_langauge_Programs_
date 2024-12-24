#include <stdio.h>

int main(void) {
  int arr[10];
  int *a = arr;
  a = a+2;
  if (a==&arr[2])//& is use to declare the addres of the variable
  {
    printf("our memory location");
  }
  else 
  {
    printf("not on ours memory loaction ");
  }
  return 0;
}