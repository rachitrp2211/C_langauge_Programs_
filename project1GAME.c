#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
  int guess,nguess=1,number;
  srand(time(0));
  number=rand()%100+1;
  printf("The number is %d\n",number);
  do {
    printf("Guess the number between 1to100\n");
    scanf("%d",&guess);
    if(guess>number)
    {
      printf("Lower number please!\n");
    }
    else if (number>guess)
    {
      printf("Higher number please!\n");
    }
    else
    {
      printf("You guessed it in %d attempts\n",nguess);
    }
    nguess++;
  }
    while(guess!=number);
  return 0;
}