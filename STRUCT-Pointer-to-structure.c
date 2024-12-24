#include <stdio.h>
#include<string.h>
struct emp
{
int id;
float salary;
char name[10];
};
int main(void) {
  struct emp e1;
  struct emp *ptr;
  ptr = &e1;
  ptr->id=328;
  printf("%d",ptr->id);
  return 0;
}