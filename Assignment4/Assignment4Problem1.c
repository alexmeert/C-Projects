#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int x = 0;
  printf("Enter a number between 1-100: ");
  scanf("%d", &x);
  int mod = x % 4;
  if(x>=1 && x<=100)
  {
    if (mod == 0)
    {
    printf("You got lucky this time... You won!");
    }
    else if (mod == 1 || mod == 2)
    {
    printf("Close, but no cigar... It's a tie!");
    }
    else if (mod == 3)
    {
    printf("HAHAHA... You lose!");
    }
  }
    else
    {
      printf("Invalid input");
    }

return 0;
}
