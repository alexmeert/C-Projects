#include <stdio.h>
#include <stdlib.h>

int fun1(int n);

int main(void)
{
  int ans = fun1(7);
  printf("%d", ans);
  return 0;
}

int fun1(int n)
{
   if (n == 1)
   {
       return 0;
   }
   else
   {
       return (1 + fun1(n / 2));
   }
}
