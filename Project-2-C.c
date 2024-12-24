#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stonepaperscissor(char you, char com){
  if(you == com)
  {
    return 0;
  }
  //case 1
  if (you == 's'&& com=='p')
  {
    return -1;
  }
  else if (you == 'p' && com == 's')
  {
    return 1;
  }
  // case 2
  if (you == 's'&& com=='c')
    {
      return 1;
    }
    else if (you == 'c' && com == 's')
    {
      return -1;
    }
  //case 3
  if (you == 'p'&& com == 'c')
    {
      return -1;
    }
    else if (you == 'c' && com == 'p')
    {
      return 1;
    }
  return 0;
}
int main(void) {
  char you , com;
  srand(time(0));
  int num = rand()%100+1;
  if (num < 33){
    com = 's';
  }
  else if (num >33 && num < 66){
  com = 'p';
  }
  else{
    com = 'c';
}
  printf("Enter 's' for stone, 'p' for paper and 'c' for scissor\n");
  scanf("%s",&you);
  int res = stonepaperscissor(you, com);
    printf("you choose %c and computer choose %c\n",you,com);
  if (res == 0){
    printf("Game Draw\n");
  }
  else if (res == 1){
    printf("You Win\n");
  }
  else {
    printf("you loose");
  }
  
  return 0;
}