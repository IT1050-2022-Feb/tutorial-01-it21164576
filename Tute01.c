/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int no1,no2,sum;
  float avg;

  printf("enter mark1:");
  scanf("%d",& no1);

  printf("enter mark2 :");
  scanf("%d",&no2);

  sum=no1+no2;
  avg=sum/2;
  printf("avarage marks: %.2f",avg);



  
  return 0;
}

