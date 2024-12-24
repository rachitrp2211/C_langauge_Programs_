#include <stdio.h>
#include <string.h>

typedef struct vector{
int x;
int y;
}vec;

struct vector sumvector(vec v1 , vec v2)
{
 vec result;
  result.x = v1.x + v2.x;
  result.y = v1.y + v2.y;
  return result;
}

int main(void) {
 vec v1 , v2 , sum ;
  v1.x = 4;
  v2.x = 4;
  printf("The value of X1 is %d and X2 is %d\n",v1.x,v2.x);
  v1.y = 2;
  v2.y = 2;
  printf("The value of Y1 is %d and Y2 is %d\n",v1.y,v2.y);
  sum = sumvector(v1,v2);
  printf("The the result of the X vector is :%d\n",sum.x);
  printf("The result of the Y vector is : %d",sum.y);
  return 0;
}