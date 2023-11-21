#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int factorial(int num, int counter);
void printTab(int t);

void main()
{
  factorial(5,0);
}

int factorial(int num, int counter)
{
  printTab(counter);
  printf("Looking for !%d\n", num);
  if(num == 1)
  {
    printTab(counter);
    printf("Hit Base Case - 1\n");
    return 1;
  }
  else
  {
    int temp = factorial(num-1, counter +1);
    printTab(counter);
    printf("Factorial of %d is %d\n", num-1, temp);
    return num*temp;
  }
}

void printTab(int t)
{
  int i = 0;
  for(i = 0; i < t; i ++)
  {
    printf("\t");
  }
}
