#include <stdio.h>
void main (void)
{
  /* create an array that contains integers with a length of 10 */
 int a[10];
 /* create an integer called count */
 int count;
 /* 10 times */
 for (count = 0; count < 10; count++)
{
/* set the countth element in the array to count times 10 plus count */
 a[count] = count * 10 + count;
 }
 printf ("The first and second and third elements of a are %d and %d and %d\n", a[0], a[1], a[2]);
 printf ("Or, as pointers, %d and %d and %d\n", *a, *(a+1), *(a+2));
}