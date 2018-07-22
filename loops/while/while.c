#include <stdio.h>
void main (void)
{
 int a = 0;
 while (a < 5)
 {
  printf ("a is equal to %d\n", a);
  /* ++ is short hand for add 1 */
  a++;
 }
 printf ("a is equal to %d and I've finished\n", a);
}