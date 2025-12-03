#include<stdio.h>
void main()
{
    int month,days;
    printf("Enter days \n");
    scanf("%d",&days);
    month = days/30;
    days = days%30;
    printf("Months = %d , Days = %d ",month,days);

}