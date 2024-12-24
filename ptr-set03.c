#include <stdio.h>
void sumavg(int a, int b, int *sum, float *avg){
  *sum = a + b;
  *avg = (float)(*sum) / 2;
}
int main() {
  int i ,j,sum; 
  float avg;
  i = 2;
  j = 4;
  sumavg(i, j, &sum, &avg);
  printf("the sum of the number is : %d\n",sum);
  printf("the average of the number is : %f\n",avg);
  return 0;
}