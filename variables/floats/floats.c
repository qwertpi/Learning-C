#include <stdio.h>
void main (void)
{
 /* make an inetger called a */
 float a;
 /* make an integer called b and initalise it with a value of 3*/
 int b = 3;
 int c;
 /* give a a value of 2 */
 a = 2.1;
 /* give c the value of a plus b */
 /* as the answer is a float but c is an integer everything after the decimal point is thrown away. THIS DOES NOT ROUND. THIS IS FLOOR ROUNDING.*/
 c = a + b;
 /* %f is needed for as a placeholder for floats */
 printf ("The sum of adding %f and %d is %d\n", a, b, c);
}