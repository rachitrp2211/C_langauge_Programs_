#include <stdio.h>
#include <string.h>
typedef struct student {
int roll;
char name[50];
float marks;
}std;


int main(void) {
  std s1;
  std *ptr;
  ptr = &s1;
  ptr->roll = 38;
  ptr->marks = 8.5;
 strcpy(ptr->name,"Rachit");
  printf("THE ILLUSTRUSTION OF THE USE OF THE ARROW OPERATOR\n\n");
  printf("The name no is :%s\n",ptr->name);
  printf("The roll no is :%d\n",ptr->roll);
  printf("The marks no is :%0.1f\n",ptr->marks);
  
  
  
  return 0;
}