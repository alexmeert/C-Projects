#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int choice = 0;
  int favnum = 0;
  int leastfavnum = 0;

  while(choice != 4)
  {
    printf("Please choose from one of the following:\n1-Print Smiley\n2-Enter Favorite Number\n3-Enter Hated Number\n4-Take your ball and go home (Quit)\n");
    scanf("%d", &choice);

      if (choice == 1)
      {
        printf("%c\n\n", 1);
        choice = 0;
      }
      if (choice == 2)
      {
        printf("So you like numbers huh? What's your favorite number boss?\n");
        scanf("%d", &favnum);
          if(favnum == 69)
          {
            printf("Very funny...\n\n");
          }
            else if (favnum != 69)
            {
              printf("Your favorite number is %d?! No judgement, just not what I expected...\n\n", favnum, favnum);
            }
            if (favnum>0 && leastfavnum>0)
            {
              printf("FUN FACT: The sum of your favorite and least favorite number is %d... just thought you'd wanna know...\n\n", favnum+leastfavnum);
              choice = 0;
            }
        choice = 0;
      }
      if (choice == 3)
      {
        printf("Hmmmm... What number really grinds your gears boss?\n");
        scanf("%d", &leastfavnum);
        printf("Yeah, I agree %d is a terrible number\n\n", leastfavnum);
        choice = 0;
        if (favnum>0 && leastfavnum>0)
        {
          printf("FUN FACT: The sum of your favorite and least favorite number is %d... just thought you'd wanna know...\n\n", favnum+leastfavnum);
          choice = 0;
        }
      }
      if (choice == 4)
      {
        printf("Hasta la vista baby.");
      }
      else if (choice>4)
      {
        printf("Keep it 1-4 bucko. I'm a program written by a freshman who has never coded before, I can't read your mind...\n\n");
        choice = 0;
      }

  }
  return 0;
}
