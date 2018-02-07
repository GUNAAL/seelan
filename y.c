#include <stdio.h>
 
int main()
{
     
    int c,d;
    int diff;
 
    printf("Enter first number: ");
    scanf("%d",&c);
    printf("Enter second number: ");
    scanf("%d",&d);
    if( c>d )
        diff=c-d;
    else
        diff=c-d;
 
    printf("\nDifference between %d and %d is = %d",c,d,diff);
    return 0;
}
