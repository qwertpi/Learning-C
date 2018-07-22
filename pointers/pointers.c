#include <stdio.h>
void main (void)
{
 int a;
 /* create a pointer to an integer and call it ptr_to_a */
 int *ptr_to_a;
 /*give ptr_to_a the value of the address of a */
 ptr_to_a = &a;
 a = 5;
 printf ("The value of a is %d\n", a);
 /* set the variable pointed to by the pointer ptr_to_a to 6*/
 *ptr_to_a = 6;
 printf ("The value of a is %d\n", a);
 printf ("The value of ptr_to_a is %d\n", ptr_to_a);
 printf ("It stores the value %d\n", *ptr_to_a);
 printf ("The address of a is %d\n", &a);
}