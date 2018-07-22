#include <stdio.h>
void main (void)
{
  // declare a pointer called fp of the type file
  FILE *fp;
  // declare an integer called value
  int value;
  // turn fp into a pointer to file.txt in read binary mode
  fp = fopen ("file.txt", "rb");
  // fp will be 0 ie true if the file exists
  if (fp)
  {
    //while true ie. forever
    while (1)
    {
      //set value to the output of get character (this will be the chatracter repsrented as an ascii point between 0-255)
      value = fgetc (fp);
      // if value is EOF (End Of File) break
      if (value == EOF) break;
      // else print value as a charcter
      else printf ("%c", value); 
    }
    // close the file
    fclose (fp);
  }
}