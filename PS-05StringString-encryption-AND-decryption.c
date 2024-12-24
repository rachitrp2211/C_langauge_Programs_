#include <stdio.h>
void encrypt(char *c){
  char *ptr = c;
  while(*ptr != '\0')
    {
      *ptr = *ptr + 1;
      ptr++;
    }
}
void decrypt(char *e){
    char *p = e;
    while(*p != '\0')
      {
        *p = *p - 1;
        p++;
      }
  }

int main() {
char c[]="Rachit";
char e[]="Sbdiju";
  encrypt(c);
  decrypt(e);
  printf("The encrypted message is :%s\n",c);
  printf("The decrypted message is :%s",e);
  return 0;
}
