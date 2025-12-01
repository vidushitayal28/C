#include<stdio.h>
int main()
{
    int values[4];
    printf("Enter 5 numbers: \n");
    for(int i=0; i<5;i++)
    {
    scanf("%d", &values[i]);
    }

    printf ("array elements: \n");
    for(int i=0; i<5; i++){
    printf("values[%d] = %d\n",i,values[i]);

}
return 0;


    
}