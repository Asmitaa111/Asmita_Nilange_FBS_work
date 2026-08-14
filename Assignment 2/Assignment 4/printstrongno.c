#include <stdio.h>

int main()
{
    int n, num, temp, digit, i;
    int sum, factorial;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers are: ");

    for(num = 1; num <= n; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            digit = temp % 10;

            factorial = 1;

            for(i = 1; i <= digit; i++)
            {
                factorial = factorial * i;
            }

            sum = sum + factorial;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}