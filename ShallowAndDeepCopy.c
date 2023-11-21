#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main()
{
/*
  char arr1[5] = {'a', 'c', 'e', 'f', 'z'};
  char arr2[5];
  //shallow copy
  //arr2 = arr1;

//deep copy
int i = 0;
for(i = 0; i < 5; i++)
{
  arr2[i] = arr1[i];
}
  arr2[1] = 'b';
  printf("%c\n", arr1[1]);
*/

srand(time(NULL));
//RandomNum = rand() % Range + Min;
//Inclusive: range = max - min+1;
//Exclusive: range = max - min;
int temp = rand()%100;

float RandomF = (float)temp/100.0;
printf("The random float is %.2f\n", RandomF);

}
