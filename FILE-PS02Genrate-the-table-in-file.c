#include <stdio.h>

int main(void) {
int num;
  printf("Enter the number of table you wanted to generate:");
  scanf("%d",&num);
FILE *tb;
  tb = fopen("table.txt","w");
  for(int i=0;i<10;i++)
  {
  fprintf(tb,"%d X %d = %d\n",num,i+1,num*(i+1));
  }
  printf("The table is successfully generated");
  fclose(tb);
  
  return 0;
}