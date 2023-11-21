#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char letter;
  printf("Please enter a lowercase letter: ");
  scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') //compound logic
    {
      printf("Dude, you just entered a vowel.");
    }
    else if (letter == 'y')
    {
      printf("Dude, you MAY have entered a vowel.");
    }
    else if (letter != 'a')
    {
      printf("Bro, you just entered a consonant.");
    }

  return 0;
}
