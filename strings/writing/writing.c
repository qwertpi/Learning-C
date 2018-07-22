#include <stdio.h>
#include <string.h>
void main (void)
{
 char str1[10] = "first";
 char str2[10] = "second";
 char str3[20]=;
 // overwrite str3 with str1
 strcpy (str3, str1);
 //concatante str3 and str2 ie. append str2 to str3
 strcat (str3, str2);
 printf ("%s + %s = %s\n", str1, str2, str3);
}