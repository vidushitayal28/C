#include<stdio.h>
int main()
{
    int unit;
    float amt;

    printf("Enter no. of units = ");
    scanf("%d" ,&unit);

    if (unit<=100)
    amt = unit * 2.5;
        else if (unit<=200)
        amt = (100 * 2.5) + (unit-100)*3.5;
            else if (unit<=300)
            amt = (100 * 2.5) + (100 * 3.5) + (unit -200) * 4.5;
                else if (unit<=400)
                amt = (100 * 2.5) + (100 * 3.5) + (100 *4.5) + (unit -300)*5.5;
                    
                else
                amt = (100 * 2.5) + (100 * 3.5) + (100 *4.5) + (100 * 5.5) + (unit -400)*7;

    printf("Amount to be paid = %.2f",amt);
    return 0;            
}