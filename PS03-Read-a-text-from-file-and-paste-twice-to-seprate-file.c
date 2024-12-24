#include <stdio.h>

int main(void) {
FILE *pt1;
FILE *pt2;
  pt1 = fopen("a.txt", "r");
  pt2 = fopen("b.txt", "w");
char c = fgetc(pt1);
char c2 = fgetc(pt1);
  while(c!=EOF){
    fputc(c, pt2);
    c = fgetc(pt1);
  }
  while(c2!=EOF){
    fputc(c2, pt2);
    c2 = fgetc(pt1);    
  }
  
 
  return 0;
}