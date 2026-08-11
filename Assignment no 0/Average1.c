#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    float Average;

    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    Average = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("Average of these numbers is: %.2f", Average);

    return 0;
}