#include<stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Maximum number = %d", max);
    printf("\n\n           -25331A05D3");

    return 0;
}
