#include <stdio.h>
void main()
#define F_LOW 0
#define F_MAX 100
#define STEP  20
{
typedef float REAL; 
REAL fahrenheit, celsius; 

fahrenheit = F_LOW;
printf("Fahrenheit Celsiusc\n\n");
while (fahrenheit <= F_MAX)
{
    celsius = ( fahrenheit - 32.0)/1.8;
    printf("%5.lf %7.2f\n",fahrenheit,celsius);
    fahrenheit = fahrenheit + STEP ;
}
}