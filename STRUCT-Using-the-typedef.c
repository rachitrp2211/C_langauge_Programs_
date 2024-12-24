#include <stdio.h>
#include<string.h>
typedef struct emp
{
int id;
float salary;
char name[10];
}em;
void show(struct emp em){
printf("The id of the employee is %d\n",em.id);
printf("The salary of the employee is %f\n",em.salary);
printf("The name of the employee is %s\n",em.name);
}
int main(void) {
  em e1;
  em *ptr;
  ptr = &e1;
  ptr->id=328;
  ptr->salary = 7547635.345;
  strcpy(ptr->name,"Rachit");
  show(e1);  
  return 0;
}