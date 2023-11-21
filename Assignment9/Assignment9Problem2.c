#include <stdio.h>
#include <stdlib.h>

int myStringCmp(char array1[], char array2[]);

int main(void)
{
  char array1[50];
  char array2[50];
  printf("Enter two words\n");
  gets(array1);
  gets(array2);
  int answer = myStringCmp(array1, array2);
  if(answer == 0)
  {
    printf("%s and %s are the same word.", array1, array2);
  }
  else if(answer == -1)
  {
    printf("%s comes before %s in the dictionary.", array1, array2);
  }
  else if(answer == 1)
  {
    printf("%s comes before %s in the dictionary.", array2, array1);
  }
}

int myStringCmp(char array1[50], char array2[50])
{
  int index = 0;
  for(index = 0; index < 50; index++)
  {
    for(index = 0; index <50; index++)
    {
      if(array1[index] == array2[index])
      {
        return 0;
      }
      else if(array1[index] > array2[index])
      {
        return 1;
      }
      else if(array1[index] < array2[index])
      {
        return -1;
      }
    }
  }
}
