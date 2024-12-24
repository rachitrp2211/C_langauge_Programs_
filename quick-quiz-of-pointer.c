#include <stdio.h>

 int main() {
//   //ADDITION OF NUMBER TO THE ADDRESS POINTER 
//   int i=2;
//   int *a=&i;
//   printf("Before A :%u\n",a);
//   a=a+1;
//   printf("After A :%u\n",a);
//   //SUBTRACTION OF NUMBER TO THE ADDRESS POINTER 
//   float j=2.5;
//   float *b=&j;
//   printf("Before B :%u\n",b);
//   b=b+1;
//   printf("After B :%u\n",b);
// //SUBSTRACTING ONE POINTER FROM THE ANOTHER POINTER 
//   int *c=&i;
//   int *d=&j;
//   printf("Before C :%u\n",c);
//   printf("Before D :%u\n",d);
//   d=d-c;
//   printf("After D :%u\n",d);
//COMPARISION OF TWO POINTER VARIABELS
   // declaring array
   int arr[5];

   // declaring pointer to array name
   int* a = &arr;
   // declaring pointer to first element
   int* b = &arr[0];

   if (a == b) {
       printf("Pointer to Array Name and First Element "
              "are Equal.");
   }
   else {
       printf("Pointer to Array Name and First Element "
              "are not Equal.");
   }
     return 0;
 }