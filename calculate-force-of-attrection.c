#include <stdio.h>
float force(float mass);

int main() {
  int mass;
  printf("enter the value of mass\n");
  scanf("%d",&mass);
  printf("the value of force n newton is : %f",force(mass));
  return 0;
}

float force(float mass)
{
  
  float result = mass*9.8;
  return result;
}