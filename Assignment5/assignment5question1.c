#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int student = 0;
    float score = 0;
    int count = 0;
    float total = 0;

    printf("Hello, how many students are there in your class?\n");
    scanf("%d", &student);
    for(count = 1; count <= student; count++)
    {
      printf("Enter the score of student %d:\n", count);
      scanf("%f", &score);
      while(score > 100 || score < 0)
      {
        printf("Please enter a score between 1 and 100:\n");
        scanf("%f", &score);
      }
      total+=score;
    }
    float average = total / student;
    printf("The class average is a %.2f", average);

  return 0;

}
