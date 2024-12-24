#include <stdio.h>

int main(void) {
int number=45;
//Writing innto the file
  FILE*fp;
  fp=fopen("data.txt","w");
  fprintf(fp,"%d\n",number);
  fprintf(fp,"Thanks forr using fprintf");
  fclose(fp);

//getc

  FILE *pt;
  pt = fopen("getc.txt","r");
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n",getc(pt));
  printf("The character of the file is : %c\n\n",getc(pt));
  fclose(pt);

//putc
FILE *pt2;
  pt2 = fopen("putc.txt","w");
  putc('R',pt2);
  fclose(pt2);

//Reading full file
FILE *pt3;
  pt3 = fopen("Reading.txt","r");
  char c;
  c= getc(pt3);
  while(c!=EOF){
    printf("%c",c);
    c = getc(pt3);
  }
  return 0;
}