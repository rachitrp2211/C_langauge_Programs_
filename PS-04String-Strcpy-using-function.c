#include <stdio.h>
#include <string.h>
void my_strcpy(char *s1,char *s2)
{
  strcpy(s2,s1);
  printf("%s",s2);

}
int main() {
  char s1[]="Rachit";
  char s2[100];
  my_strcpy(s1,s2);
  
  return 0;
}