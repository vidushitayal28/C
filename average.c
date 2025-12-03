#include <stdio.h>

int main()
{
    int count, N;
    float sum, average, number;

    printf("Enter how many numbers: ");
    scanf("%d", &N); 

    sum = 0;
    count = 0;

    printf("Enter %d numbers:\n", N);
    while (count < N)
    {
        scanf("%f", &number);
        sum = sum + number;
        count = count + 1;
    }

    average = sum / N;

    printf("N = %d, Sum = %.2f\n", N, sum);
    printf("Average = %.2f\n", average);

    return 0;
}