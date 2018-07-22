#include <stdio.h>
/* create a function that returns an integer, is called sum and takes the arguments of two integers (a and b) */
int sum (int a, int b)
{
 /* delcare an integer called res */
 int res;
 /* set res to the value of a plus b */
 res = a + b;
 return res;
}

void main (void)
{
 int y = 2;
 /* declare an integer called z and intisalise it with the value of what the sum function return when passed the arguments of 5 and y */
 int z = sum (5, y);
 printf ("The sum of 5 and %d is %d\n", y, z);
}