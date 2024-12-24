#include <stdio.h>
#include<string.h>
struct emp{
int id;
char name[20];
float salary;
};

int main(void) {
struct emp e1,e2,e3;
  printf("Enter the id of E1:\n");
  scanf("%d",&e1.id);
  printf("Enter the Name of E1:\n");
  scanf("%s",e1.name);
  printf("Enter the salary of E1:\n");
  scanf("%f",&e1.salary);
  
  printf("Enter the id of E2:\n");
  scanf("%d",&e2.id);
  printf("Enter the name of E2\n:");
  scanf("%s",e2.name);
  printf("Enter the salary of E2:\n");
  scanf("%f",&e2.salary);

  printf("Enter the id of E3:\n");
  scanf("%d",&e3.id);
  printf("Enter the name of E3:\n");
  scanf("%s",e3.name);
  printf("Enter the salary of E3:\n");
  scanf("%f",&e3.salary);

  return 0;
}