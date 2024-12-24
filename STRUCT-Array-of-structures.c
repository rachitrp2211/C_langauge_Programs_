#include <stdio.h>
#include <string.h>


struct emp
{
int id;
float salary;
char name[10];
};
int main(void) {
  struct emp Rachit[100];
  Rachit[1].id = 314;
 Rachit[1].salary = 314.3;
struct emp Rachiit = {328,324567.235543,"Rachit"}; 
  printf(" ID is :%d\n",Rachiit.id);
  printf(" salary is :%f\n",Rachiit.salary);
  printf(" name is :%s\n",Rachiit.name);
  return 0;
}