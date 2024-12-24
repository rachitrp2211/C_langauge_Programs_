#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main() {
  int a;
  
  goodmorning();
  goodafternoon();
  goodnight();
  
  return 0;
}
void goodmorning(){
  printf("goodmorning\n");
}
void goodafternoon(){
  printf("goodafternoon\n");
}
void goodnight()
{
  printf("goodnight\n");
}