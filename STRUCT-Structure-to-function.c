#include <stdio.h>
#include<string.h>
struct emp
{
int id;
float salary;
char name[10];
};
void show(struct emp e1){
printf("The id of the employee is %d\n",e1.id);
printf("The id of the employee is %f\n",e1.salary);
printf("The id of the employee is %s\n",e1.name);
}
int main(void) {
  struct emp e1;
  struct emp *ptr;
  ptr = &e1;
  ptr->id=328;
  ptr->salary = 7547635.345;
  strcpy(ptr->name,"Rachit");
  show(e1);  
  return 0;
}