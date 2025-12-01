#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter number a\n");
    scanf("%d", &a); //%d is format specifier

    printf("Enter number b\n");
    scanf("%d", &b);
    c=a+b;

    printf("The sum is %d\n",c);

    return 0;
}
 
