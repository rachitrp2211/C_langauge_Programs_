#include <stdio.h>
void printArray( int *a , int n){
  for (int i =0; i<n ; i++){
  printf("The %dth element of the array is %d\n",i+1 ,*(a+i));
  }
  a[5]=232;//this will affect the main function ass well
}
//OTHER WAY TO DO IT 
// void printArray( int *a , int n){
//   for (int i =0; i<n ; i++){
//   printf("The %d element of the array is %d\n",i+1 ,a[i]);
//   }
// }
int main() {
  int arr[]= {23,345,35,3,6,4,6,4,56,4,5};
  printArray(arr,10);
  printf("%d", arr[5]);
  return 0;
}