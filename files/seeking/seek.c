#include <stdio.h>
void main (void)
{
  FILE *fp;
  int value;
  fp = fopen ("file.txt", "rb");
  if (fp)
  {
    //seek the file fp 10 places ahead of it's current position
    fseek (fp, 10, SEEK_CUR);
    while (1)
    {
      value = fgetc (fp);
      if (value == EOF) break;
      else printf ("%c", value);
    }
    fclose (fp);
  }
}