#include <stdio.h>
void main (void)
{
 int a = 0;
 int b=0;
 /* && means and */
 if (a == 0 && b==0)
 {
  printf ("a and b are equal to 0\n");
 }
 /* || means or 
    REMEMEBR NO ELIF IN C HAVE TO TYPE ELSE IF*/
 else if (a == 0 || b==0)
 {
  printf ("a or b are equal to 0\n");
 }
 else
 {
  printf ("neither a nor b is not equal to 0\n");
 }
}