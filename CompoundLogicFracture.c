#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  char letter1 = 'a';
  char letter2 = 'a';
  int randomnum = rand()%20+1;

  printf("Print two letters out of: A, B, C, and D\n");
  scanf("%c %c", &letter1, &letter2);

  if(letter1 == 'A' && letter2 == 'B' || letter1 == 'B' && letter2 == 'A')
  {
    printf("%c\n", 2);
  }
  else if((letter1 == 'A' && letter2 == 'C') || (letter1 == 'C' && letter2 == 'A') || (letter1 == 'B' && letter2 == 'B') || (letter1 == 'D' && letter2 == 'A') || (letter1 == 'A' && letter2 == 'D'))
  {
    printf("%d\n", randomnum);
  }
  else if(letter1 == 'A' && letter2 == 'A' || letter1 == 'C' && letter2 == 'C')
  {
    printf("Hello World");
  }
  else if(letter1 == 'D' && letter2 == 'C' || letter1 == 'C' && letter2 == 'D' || letter1 == 'B' && letter2 == 'D' || letter1 == 'D' && letter2 == 'B' || letter1 == 'D' && letter2 == 'D')
  {
    printf(":(");
  }

  return 0;
}
