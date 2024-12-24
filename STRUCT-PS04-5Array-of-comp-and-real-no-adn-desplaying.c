#include <stdio.h>
typedef struct complex{
  int real;
  int complex;
}comp;
void display(comp c)
{
  printf("The value of the real number is : %d\n",c.real);
  printf("The value of the complex number is : %d\n",c.complex);
}
int main(void) {
  comp cnum[5];
  for(int i=0 ; i<5 ; i++)
    {
      printf("Enter the value of the real number:");
      scanf("%d",&cnum[i].real);
      printf("Enter the value of complex number:");
      scanf("%d",&cnum[i].complex);
      
    }
  for(int i=0 ; i<5 ; i++)
    {
      display(cnum[i]);
    }
  return 0;
}