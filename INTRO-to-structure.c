#include <stdio.h>
#include <string.h>
struct empl{
int ID;
float salary;
char name[50];
};
int main(void) {

  struct empl e1;{ 
  e1.ID=328;
   e1.salary=45836.123;
    strcpy(e1.name,"Raj");
  }
  printf("%d\n",e1.ID); 
  printf("%s\n",e1.name); 
  printf("%0.2f\n",e1.salary);  
  return 0;
}