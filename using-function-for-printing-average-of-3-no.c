#include <stdio.h>
float average(int a, int b, int c);

int main() {
  int a,b,c;
  printf("Enter the value of a ");
  scanf("%d",&a);
  printf("Enter the value of b ");
  scanf("%d",&b);
  printf("Enter the value of c ");
  scanf("%d",&c);
  printf("the average of the three number is = %f",average(a,b,c));
  return 0;
}

float average(int a, int b, int c)
{
  float results;
  results = (a+b+c)/3;
  return results;
}