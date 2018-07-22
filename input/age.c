#include <stdio.h>
void main (void)
{
 char input[256];
 int age;
 printf ("What is your name, user?\n");
 // pause for string input and save it to the input variable //
 // & is not needed as strings are already pointers //
 scanf ("%s", input);
 printf ("Hello, %s. How old are you?\n", input);
 // pause for integer input //
 // & is needed as we need the variable to be a pointer for scanf to work //
 scanf ("%d", &age);
 printf ("Well, %s, you look young for %d\n", input, age);
}