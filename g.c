
#include <stdio.h>

void main()

{

    int num,m =40,n=60;

    clrscr();

    printf("Print Odd Numbers in a given range m to n:\n");

    for (num = m; num <= n; num++)

        {

               if (num % 4 == 3)

                  printf ("%d ", num);

         }

                getch();

}
