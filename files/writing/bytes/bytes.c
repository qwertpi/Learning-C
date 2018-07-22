#include <stdio.h>
void main (void)
{
  FILE *fp;
  int value;
  // open the file in write mode which will wipe the file if it currently exists
  fp = fopen ("file2.txt", "wb");
  if (fp)
  {
    // values 48-58
    for (value = 48; value < 58; value++)
    {
      // put the character value into the file fp
      fputc (value, fp);
    }
    fclose (fp);
  }
}