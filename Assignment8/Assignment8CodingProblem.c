#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a[2] = {0, 0};
  int num = 0;

  do
  {
    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num%2 == 0)
    {
      a[0] = a[0] + 1;
    }

    else if(num%2 == 1)
    {
      a[1] = a[1] + 1;
    }

  }while(a[0] <= 5 && a[1] <= 5);
  printf("\nNumber of evens: %d\nNumber of odds: %d", a[0], a[1]);

return 0;
}
