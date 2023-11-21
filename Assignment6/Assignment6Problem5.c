#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int table(int minimum, int maximum, int number, int sum);

int main(void)
{
  srand(time(NULL));
  int minimum = 0;
  int maximum = 0;
  int number = 0;
  int sum = 0;
  printf("Enter the minimum random number to be generated:\n");
  scanf("%d", &minimum);
  printf("Enter the maximum random number to be generated:\n");
  scanf("%d", &maximum);
  printf("Enter the number of random numbers:\n");
  scanf("%d", &number);
  printf("--------------\n");
  sum = table(minimum, maximum, number, sum);
  char option = 'a';
  do
  {
  printf("Select an option:\na - mean of all numbers\nb - sum of all random numbers\nc - exit\n");
  scanf(" %c", &option);

    switch (option)
    {
      case 'a':
      printf("The mean is: %.2f\n", (float)sum/number);
      break;
      case 'b':
      printf("The sum is: %d\n", sum);
      break;
      case 'c':
      printf("Goodbye");
      break;
      default:
      printf("Enter a valid option please\n");
      break;
    }
  }while(option != 'c');
}//end of main

int table(int minimum, int maximum, int number, int sum)
{
  int counter = 0;
  int value = 0;
  for(counter = 1; counter <= number; counter++)
  {
    int randomnum = rand()%(maximum-minimum)+minimum;
    printf("|%03d\t|%4d|\n", counter, randomnum);
    value = randomnum;
    sum += value;
  }
  printf("--------------\n\n");
  return sum;
}
