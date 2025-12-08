#include<stdio.h>
void main(){
float sub1,sub2,sub3,sub4,sub5;
float total_marks,percentage;
printf("Enter marks of subject 1\n");
scanf("%f",&sub1);

printf("Enter marks of subject 2\n");
scanf("%f",&sub2);

printf("Enter marks of subject 3\n");
scanf("%f",&sub3);

printf("Enter marks of subject 4\n");
scanf("%f",&sub4);

printf("Enter marks of subject 5\n");
scanf("%f",&sub5);

(total_marks = sub1 + sub2 + sub3 + sub4 + sub5);
(percentage = (total_marks/500)*100); 


printf("total marks and average = %f,%f\n",total_marks,percentage);

}

