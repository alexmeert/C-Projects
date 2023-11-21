#include <stdio.h>
#include <stdlib.h>

int myStringLen (char array[]); //function prototype

int main(void)
{
  //use 'gets' to populate a char array
  char array[50];
  printf("Enter a string or sentence\n");
  gets(array);
  //call the function myStringLen
  //print the size of the array
  printf("The number of characters in your word/phrase is %d ", myStringLen(array));

  return 0;
}

int myStringLen(char array[]) //function header
{
  int index = 0;
  while(array[index] != '\0')
  {
    index++;
  }
  return index;
  //return the number of characters
}
