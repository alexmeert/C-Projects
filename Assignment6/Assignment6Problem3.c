#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Write a C program using the pow and sqrt functions to find the roots of a quadratic equation.

int main(void)
{//Main Function Begins

float a = 0;
float b = 0;
float c = 0;

printf("The standard form of the quadratic equation is:\n\nax^2+bx+c\n\n");
printf("Please enter the value of the coefficient 'a':\n");
scanf("%f", &a);
printf("Please enter the value of the coefficient 'b':\n");
scanf("%f", &b);
printf("Please enter the value of 'c':\n");
scanf("%f", &c);

float power = pow(b, 2);
float discrim = (power) - (4*a*c);
printf("\nThe discriminant (b^2-4ac) of the function is:\n%.2f\n\n", discrim);

float discrimroot = sqrt(discrim);
float rootpositive = (b + discrimroot)/(2*a);
float rootnegative = (b - discrimroot)/(2*a);
float root = (-b)/(2*a);

  if (discrim > 0)
  {//If statement begins
    printf("The positive root is %.2f\n", rootpositive);
    printf("The negative root is %.2f\n", rootnegative);
  }//If statement ends
  else if(discrim == 0)
  {
    printf("The root is equal to %.2f\n", root);
  }
  else if(discrim < 0)
  {
    printf("There are no real roots");
  }

}//Main Function Ends
