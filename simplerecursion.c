#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void simpleRecur(int num, int count); //count is NOT necessary for recursion!
void printRecur(int num, int count);

void main()
{
  simpleRecur (3,0);
  return 0;
}//end main func

void simpleRecur(int num, int count)
{
  num --;
  printRecur(num, count);
  if(num == 0)
  {
    printf("Base case hit!\n");
    return;
  }
  else
  {
    simpleRecur(num, count+1);
  }
  printRecur(num, count);
}

void printRecur(int num, int count)
{
  int i = 0;
  for(i = 0; i < count; i++)
  {
    printf("\t");
  }
  printf("Num = %d, Count = %d\n", num, count);
}
