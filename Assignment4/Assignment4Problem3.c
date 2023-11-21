#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char char1;
  char char2;
  char count;
  printf("Enter two characters:\n");
  scanf("%c %c", &char1, &char2);
  printf("%c and %c", char1, char2);
  if (char1 > char2)
  {
    count = char2;
    while(count<=char1)
    {
      printf("\nYou are on %c", count);
      count++;
    }
  }
  else if (char1 < char2)
  {
    count = char1;
    while(count<=char2)
    {
      printf("\nYou are on %c", count);
      count++;
    }
  }
return 0;
}
