#include <stdio.h>
void main (void)
{
  /* create a string that can hold a maximum of 9 characters (one is used for null temrimnater so isn't 10) */
  char mystring[10] = "thestring";
  printf("%s",mystring);
}