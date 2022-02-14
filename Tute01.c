/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float sub1,sub2;
  float total=0,average=0;

  printf ("Enter 1st subject marks: ");
  scanf ("%f",&sub1);

  printf ("Enter 2nd subject marks: ");
  scanf ("%f",&sub2);

  total = sub1+sub2;
  average=total/2;

  printf ("Average marks = %.2f",average);

  return 0;
}

