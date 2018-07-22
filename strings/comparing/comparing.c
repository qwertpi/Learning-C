#include <stdio.h>
#include <string.h>
void main (void)
{
  char str1[10] = "first";
  char str2[10] = "fire";
  int n=0;
  // strcmp returns 0 if the strings are the same and a non-zero if they are diffrent
  if (strcmp (str1, str2) == 0)
  {
    printf ("The two strings are identical.\n");
  }
  else
  {
    printf ("The two strings are different.\n");
  }
  if (strlen(str1)>strlen(str2))
  {
    while (n<strlen(str1))
    {
      if (strncmp(str1,str2,n)==0)
      {
        printf("The two strings are identical for the first %i characters\n",n);
      }
      n++;
    }
  }
  else
  {
    while (n<strlen(str2))
    {
      if (strncmp(str1,str2,n)==0)
      {
        printf("The two strings are identical for the first %i characters\n",n);
      }
      n++;
    }
  }
}