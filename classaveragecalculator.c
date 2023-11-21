#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;

printf ("Enter the size of array\n");

scanf ("%d", &n);

int array[n];

int length = sizeof (array) / sizeof (array[0]);

printf ("The elements of array is\n");

for (int i = 0; i < length; i++)

{

scanf ("%d\n", &array[i]); // \n for printing result in new line

}

printf ("The elements of array is\n");

for (int i = 0; i < length; i++)

{

printf ("%d", array[i]);

}

return 0;
}
