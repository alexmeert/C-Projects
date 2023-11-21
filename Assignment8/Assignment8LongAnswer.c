#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int even[6];
  int count;
  for(count = 0; count < 6; count++)
  {
    even[count] = 2*count+2;
    printf("%d\n", even[count]);
  }
  return 0;
}
