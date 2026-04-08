#include<stdio.h>

int main()
{
    int num, i = 1;
    long int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %ld", fact);
printf("\n\n           -25331A05D3");
    return 0;
}
