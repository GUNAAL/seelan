#include <stdio.h>
 
int main()
{
   int no, sums = 0, c, array[200];
 
   scanf("%d", &no);
 
   for (c = 0; c < no; c++)
   {
      scanf("%d", &array[c]);
      sums = sums + array[c];
   }
 
   printf("Sum = %d\n",sums);
 
   return 0;
