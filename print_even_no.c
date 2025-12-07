#include<stdio.h>
void main(){
    int i,n;
    printf("enter a number till which you want even numbers");
    scanf("%d",&n);
    printf("even numbers from 0 to %d is--- ",n);
    for(i=1;i<=n;i++)
    //  if(i%2==0)
    {i++;
     printf("%d\n",i);
    }
}
