#include <stdio.h>
int main ()
{
    int a,b,product ;
    printf("C Program for Multiplication\n");
    printf("Enter number 'a' = ");
    scanf("%d",&a);
    
    printf("Enter number 'b' = ");
    scanf("%d",&b);

    product = a*b;

    printf("Multiplication of %d and %d is = %d\n", a,b,product);
    return 0;
}