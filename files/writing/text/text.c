#include <stdio.h>
void main (void)
{
  FILE *fp;
  fp = fopen ("file3.txt", "wb");
  if (fp)
  {
    //file write formatted
    fprintf (fp, "This is some text.\n");
    fclose (fp);
  }
}