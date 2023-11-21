#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float bal = 164.54;
    char x = 'a';
    float newamount = 0;

    printf("Your current balance is:\t$%.2f", bal);
    printf("\nDeposit (+) or Withdraw (-): ");
    scanf("%c", &x);

    printf("Enter Amount: $");
    scanf("%f", &newamount);

    if(x == '+')
    {
      bal = bal + newamount;
    }
    if(x == '-')
    {
      bal = bal - newamount;
    }

    printf("Your new balance is: $%.2f", bal);

    return 0;
}
