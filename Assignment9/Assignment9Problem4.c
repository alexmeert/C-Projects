#include <stdio.h>

int Quit(char answer[80]);

int main(void)
{
    char quit[] = "quit";
    char shoppinglist[10][80];
    char answer[80] = {0};
    int row = 0;
    int j = 0;
    int l = 0;
    int i = 0;

    for (j = 0; j < 10; j++)
    {
        for (l = 0; l < 80; l++)
        {
            shoppinglist[j][l]= '\0';
        }//end for
    }//end for

     do
     {
       printf("Enter an item or type quit\n");
       scanf("%s",answer);
       for (i = 0; i < 80 ; i++)
        {
         shoppinglist[row][i] = answer[i];
        }
        row++;
     }while (Quit(answer) && row < 10);

    printf("\nItems: \n");
    for (j = 0; j < row; j++)
      {
        printf("%d. ", j+1);
        for (l = 0; l < 80; l++)
        {
            printf("%c", shoppinglist[j][l]);
        }

        printf("  \n");
      }//end for
  return 0;
}//end main

int Quit(char answer[80])
{
         char quit[] = "quit";
         int index = 0;

         while (answer[index] != '\0' || quit[index] != '\0')
         {
             if (answer[index] == quit[index])
                 index++;
             else
                 return 1;
         }
  return 0;
}
