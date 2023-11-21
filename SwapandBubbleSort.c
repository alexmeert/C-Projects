#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void CheckArray(int arr[], int size);
void PrintArray(int arr[], int size);
void swapElement(int arr[], int size, int index1, int index2);
void BubbleSort(int arr[], int size);

//while loop w/ for loop inside for bubble sorting
int main()
{
  srand(time(NULL));
  int myArr[30];
  int i = 0;
  for(i = 0; i < 15; i++)
  {
    myArr[i] = rand()%100;
  }
  printf("--UNSORTED--\n");
  PrintArray(myArr, 15);
  BubbleSort(myArr, 15);
  printf("--SORTED--\n");
  PrintArray(myArr, 15);
}

// F - U - N - C - T - I - O - N - S

void BubbleSort(int arr[], int size)
{
  int DidSwap = 0;
  do{
    DidSwap = 0;
    //While did swap
      int i = 0;
      for(i = 1; i < size ; i++)
      {
        //Iterate through the array
        if(arr[i] < arr[i-1])
        {
          DidSwap = 1;
          swapElement(arr, size, i, i-1);
          //Swap values IF the later is less than the previous value
        }
      }//end for
    //end while
  }while(DidSwap);
}


void PrintArray(int arr[], int size)
{
  int i = 0;
  for(i = 0; i < size; i++)
  {
    printf("%d,", arr[i]);
  }
  printf("\n");
}


void swapElement(int arr[], int size, int index1, int index2) //need to include size to ensure the user doesnt go outside the alotted memory
{
  if(index1 < size && index2 < size)
  {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
  }
  else
  {
    printf("Index outside of array size!");
  }
}


void CheckArray(int arr[], int size)
{
  arr[0] = -100;
  //Shallow Copy changing one element
}
