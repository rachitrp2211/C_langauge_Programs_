#include <stdio.h>

int main() {
  int n_subject = 2;
  int n_student = 3;

  int marks[5][3];
  for (int i = 0; i<n_student;i++)
  {
    for(int j = 0;j<n_subject;j++)
      {
        printf(" Enter the marks of %d student and in %d subject:",i+1,j+1);
        scanf("%d", &marks[i][j]);
      }
  }

   for (int i = 0; i< n_student;i++)
    {
      for(int j = 0;j<n_subject;j++)
        {
          printf(" Enter the marks of %d student in the %d subject is :%d\n",i+1,j+1,marks[i][j]);
        }
    }
  return 0;
}