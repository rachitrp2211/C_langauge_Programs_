#include <stdio.h>

int main(void) {
FILE *fp;
  fp = fopen("sample2.txt","r"); 
  if (fp==NULL)
  {
    printf("file does not exist");
  }
  else
  {
//Taking integet from the file 
  int num,num2 ;
  fscanf(fp,"%d",&num);
//Taking two integer from the file
  fscanf(fp,"%d",&num2);
  printf("The value of num is %d\n",num);
  printf("The value of num2 is %d\n",num2);
  fclose(fp);//file closing is nessary to avoid corruption                  of the file
  }
  return 0;
}