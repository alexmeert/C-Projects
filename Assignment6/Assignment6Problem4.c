#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x);

int main(void)
{
  double x = 0.3;
  f(x);
  x = 0.5;
  f(x);
  x = 0.8;
  f(x);

}//End of main function

double f(double x)
{
  int n = 0;
  double value = 0;
  double sum = 0;
  for(n = 1; n <= 20; n++)
  {
    value = pow(-1, n+1)*(pow(x,n)/n);
    sum += value;
  }
  printf("f(%.1f) = %f\n", x, sum);
}
