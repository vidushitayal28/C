#include<stdio.h>
int main(){
    char str1[100], str2[100], copy[100];
    int i, j, length1=0,length2=0,cmp=0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i=0;str1[i]!='\0';i++){
        length1++; }
    for(i=0;str2[i]!='\0';i++){
        length2++;
    }
    printf("\nlength of first string =%d\n",length1);
    printf("legth of second string =%d\n",length2);

    return 0;

}
