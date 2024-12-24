#include <stdio.h>
#include<string.h>

int main() {
  //STRLEN
 char *s="Rachit";
  int a = strlen(s);
  printf("the length of the string excluding the null(/0) character is: %d\n",a );
printf("\n\n\n\n\n");


  //STRCPY
  printf("STRCPY()\n");
  
  char *r = "THAT";
  char r2[50];
  strcpy(r2,r);
  printf("the r2 is %s",r2);

  printf("\n\n\n\n\n");


  //STRCAT
  printf("STRCAT()\n");

  char *d="dhyan";
  char d2[50]="hello";
  strcat(d2 , d);
  printf("the updated D2 is %s",d2);//NO SPACE WILL LEFT IN BETWEEN THE TWO STRINGS.

 
  
  //STRCMP 
  char *k="raj";
  char k2[50]="hello";
  int val = strcmp(k2 , k);
  printf("the updated D2 is %d",val);
  
  
  return 0;
}