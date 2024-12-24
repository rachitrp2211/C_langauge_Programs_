#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int *ptr;
  int n;
  printf("How many integer you want to enter :");
  scanf("%d",&n);
  ptr = (int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    printf("Enter the %d element :\n",i+1);
    scanf("%d",&ptr[i]);
  }
  for(int i=0;i<n;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }

  //creating the DMA for fload
  float *pt;
  pt = (float *)malloc(6*sizeof(float));
  
  for(int i=0;i<6;i++){
    printf("Enter the %d element :\n",i+1);
    scanf("%f",&pt[i]);
  }
  for(int i=0;i<6;i++){
    printf("The value of %d element is : %f\n",i+1,pt[i]);
  }
  return 0;
}