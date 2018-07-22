#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void) 
{
  int random_number;
  int guess;
  int guesses=0;
  int mode;
  printf("Mode 1: 0-50\nMode 2: 0-100\nMode 3: 0-250\nMode 4: 0-500\nMode 5 0-2000\n1-5?");
  scanf("%d",&mode);
  srand(time(NULL));
  switch(mode)
  {
    case 1: random_number=round(rand()/(RAND_MAX / 50));
    break;
    case 2: random_number=round(rand()/(RAND_MAX / 100));
    break;
    case 3: random_number=round(rand()/(RAND_MAX / 250));
    break;
    case 4: random_number=round(rand()/(RAND_MAX / 500));
    break;
    case 5: random_number=round(rand()/(RAND_MAX / 2000));
    break;
  }
  while (guess!=random_number)
  {
    printf("Please enter your guess");
    scanf ("%d", &guess);
    if (guess>random_number)
    {
      printf("Too high\n");
    }
    else if (guess<random_number)
    {
      printf("Too low\n");
    }
    guesses++;
  }
  printf("It took you %d guesses to get the correct answer of %d\n",guesses,random_number);
  return 0;
}
