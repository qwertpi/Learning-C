#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
int main(void) 
{
  int random_number;
  int guess;
  int guesses=0;
  srand(time(NULL));
  random_number=rand() / (RAND_MAX / 500);
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