#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(float array[], int size);
void mySwap(float array[], int size, int index1, int index2);

//BEGIN MAIN
int main(void)
{
  srand(time(NULL));
  float array[10];
  int i = 0;
  for(i = 0; i < 10; i++)
  {
    array[i] = (float)rand()/RAND_MAX;
  }
  printf("Before Swap!\n");
  printArray(array, 10);
  mySwap(array, 10, 0, 9);
  printf("After Swap!\n");
  printArray(array, 10);
}
//END MAIN

void printArray(float array[], int size)
{
  int i = 0;
  for(i = 0; i < size; i++)
  {
    printf("%f\n", array[i]);
  }
}


void mySwap(float array[], int size, int index1, int index2)
{
  if(index1 < size && index2 < size)
  {
    float temp = array[index1]; //temporary variable so nothing is lost
    array[index1] = array[index2];
    array[index2] = temp;
  }
  else
  {
    printf("Index outside of array size!");
  }
}
