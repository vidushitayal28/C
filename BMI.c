#include<stdio.h>
void main(){
float height,weight,BMI;
printf("Enter weight in kg: \n");
scanf("%f",&weight);
printf("Enter hieght in cm: \n");
scanf("%f",&height);

(BMI = weight/(height*height));
printf("BMI = %f",BMI);
}