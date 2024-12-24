#include <stdio.h>
typedef struct timestammp
{
int date;
int month;
int year;
int hour;
int minute;
int second;
}tmstm;
void display(tmstm d)
{
 printf("%d/%d/%d,%d:%d:%d\n",d.date,d.month,d.year,d.hour,d.minute,d.second); 
}
int main(void) {
tmstm d1 = {22,11,2003,3,45,32};
  
printf("The Timestamp is :");
display(d1);
    return 0;
}