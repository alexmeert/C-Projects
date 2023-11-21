#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int CoinFlip();
void PrintBoard();
void userChoice(int x);

int main(void)
{//Begin Main Function
  srand(time(NULL));

  printf("Welcome to Tic-Tac-Toe!\n");
  printf("One or two players? (1 or 2):\t\t");
  int playernum = 0;
  scanf("%d", &playernum);
  if (playernum == 1)
  {
    char name[20];
    printf("Please enter your name:\t");
    scanf("%s", &name);
  }//End If
  else if (playernum == 2)
  {
    char player1[20];
    char player2[20];
    printf("Player 1 please enter your name:\t");
    scanf("%s", &player1);
    printf("Player 2 please enter your name:\t");
    scanf("%s", &player2);
    printf("\nLet's flip a coin to see who goes first... Heads is %s, Tails is %s...", player1, player2);

    int coin = CoinFlip();

    if(coin == 1)
    {
      printf("\n\nIt's heads! %s will go first!\n", player1);
      PrintBoard();
      printf("\n\n%s please select an open space from 1-9:\t", player1);
      int option;
      scanf("%d", &option);
      userChoice(option);
      printf("%s, your turn.", player2);

    }//End If
    else if(coin == 2)
    {
      printf("\n\nIt's tails! %s will go first!\n", player2);
      PrintBoard();
      printf("\n\n%s please select an open space from 1-9:\t", player2);
      int option;
      scanf("%d", &option);
      userChoice(option);
      printf("%s, your turn.", player1);

    }//End Else If
  }//End Else If
}//End Main Function




int CoinFlip()
{
  int flip = rand()%2+1;
  return flip;
}

void PrintBoard()
{
  printf("\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n");
}

void userChoice(int x)
{
  switch (x)
  {
    case 1:
    printf("\n X | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 2:
    printf("\n 1 | X | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 3:
    printf("\n 1 | 2 | X \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 4:
    printf("\n 1 | 2 | 3 \n---|---|---\n X | 5 | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 5:
    printf("\n 1 | 2 | 3 \n---|---|---\n 4 | X | 6 \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 6:
    printf("\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | X \n---|---|---\n 7 | 8 | 9 \n\n");
    break;
    case 7:
    printf("\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n X | 8 | 9 \n\n");
    break;
    case 8:
    printf("\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | X | 9 \n\n");
    break;
    case 9:
    printf("\n 1 | 2 | 3 \n---|---|---\n 4 | 5 | 6 \n---|---|---\n 7 | 8 | X \n\n");
    break;
    default:
    printf("Invalid Spot, Try Again!\n");
    break;
  }
}
