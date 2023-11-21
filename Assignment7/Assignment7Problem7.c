#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumOfRange(int start, int end);

int main(void)
{
  int start = 0;
  int end = 0;
  int sum = 0;
  printf("Enter the start of the range\n");
  scanf("%d", &start);
  printf("Enter the end of the range\n");
  scanf("%d", &end);

  sum = sumOfRange(start, end);

  return 0;
}

int sumOfRange(int start, int end)
{
  int i = 0;
  int sum = 0;
  for(i = start; i <= end; i++)
  {
    sum = sum + i;
  }
  printf("The sum of the numbers in the range is %d", sum);
}
