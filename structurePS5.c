#include <stdio.h>
typedef struct date
{
int date;
int month;
int year;
}dt;
void display(dt d)
{
 printf("The date is %d / %d / %d\n",d.date,d.month,d.year); 
}
int datecmp(dt d1 , dt d2)
{
  if(d1.year> d2.year){
    return 1;
  }
  if(d1.year<d2.year){
    return -1;
  }
  if(d1.month>d2.month){
    return 1;
  }
  if(d1.month<d2.month){
    return -1;
  }
  if(d1.date>d2.date){
    return 1;
  }
  if(d1.date<d2.date){
    return -1;
  }
  return 0;
}
int main(void) {
dt d1 = {22,11,03};//if the first date is smaller that is why it will print -1
dt d2 = {3,8,04};
display(d1);
display(d2);
int a = datecmp(d1,d2);
  printf("The value of the dates that is compared is :%d",a);
  
  return 0;
}