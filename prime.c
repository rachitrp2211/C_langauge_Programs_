#include <stdio.h>

int main(void) {
  int n=45,prime = 1;
  for(int i=2;i<n;i++){
    if(n%i==0){
      prime = 0;
      break;
    }

  }
if(prime==0){
  printf("not prime");
}
  else
{
  printf("prime");
}
  return 0;
  }  

