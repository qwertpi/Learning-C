#include <stdio.h>
void main (void)
{
 int a = 0;
 /* switch allows for multiple condtions to be checked */
 switch (a)
 {
 /* if a is equal to 0 */
 case 0 : printf ("a is equal to 0\n");
 break;
 /* if a is equal to 1 */
 case 1 : printf ("a is equal to 1\n");
 break;
 /* else */
 default : printf ("a is neither 0 or 1\n");
 }
}