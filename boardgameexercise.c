#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int pos = 0; //if it's inside the while loop it will be reset every time

while(pos <= 50)
  {
  //For Loop(s)
  int count = 0;
  for(count =0; count < 50; count++)
  {
    if (count == pos)
    {
      printf("X");
    }
    else
    {
      printf("_");
    }
  }
/*  for(count = 0; count < pos; count++)
    {
      printf("_");
    }
  printf("X");
  for(count = pos +1; count < 50; count++)
    {
      printf("_");
    }
  */
  printf("\n");
  //end For
  int roll = rand()%6+1; //declare increment value inside the while loop since you want it to be reset every time
  pos += roll;
  printf("The roll was %d, and the new position is %d\n", roll, pos);
  }//end while

}//end main
