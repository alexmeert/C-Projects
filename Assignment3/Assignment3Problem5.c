#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int weight1 = 0;
  int weight2 = 0;
  int weight3 = 0;
  int weight4 = 0;

  printf("Enter two weights in kilograms: \n");
  scanf("%d %d", &weight1, &weight2);

  printf("\nEnter two weights in pounds: \n");
  scanf("%d %d", &weight3, &weight4);

  float weight1kg = weight1*2.2;
  float weight2kg = weight2*2.2;
  float weight3lbs = weight3/2.2;
  float weight4lbs = weight4/2.2;

  printf("-----------------------------------------------\n");
  printf("%-9d|%13.1f|%-9d|%13.2f\n", weight1, weight1kg, weight3, weight3lbs);
  printf("%9d|%13.2f|%-9d|%13.3f", weight2, weight2kg, weight4, weight4lbs);
  printf("\n-----------------------------------------------");

  return 0;

}
