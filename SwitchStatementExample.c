#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int choice;
  printf("1 - Dark Forest\n2 - Evil Castle\n3 - Haunted House\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice)
  {
    case 1:
      printf("WOW! You have chosen to brave the dark forest!\n");
      break;
    case 2:
      printf("You have chosen to conquer the dark castle!\n");
      break;
    case 3:
      printf("You have chosen to enter the haunted house! SpOoKy!\n");
      break;
    default:
      printf("Invalid choice, try again please!");
      break;
  }

  return 0;

}
