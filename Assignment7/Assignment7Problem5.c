#include<stdio.h>

void abc(int i);
int main()
{
   abc(12);
   return 0;
}
void abc(int i)
{
   if(i == 15) {
       return;
   }

   abc(i + 1);
   printf("%d ", i);
}
