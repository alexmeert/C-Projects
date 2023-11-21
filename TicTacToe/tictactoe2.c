#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x = 4;
  printf("what is x?\n");
  scanf("%d", &x);
  printf("x = %d\n", x);
  printf("&x = %d\n", &x);
}
