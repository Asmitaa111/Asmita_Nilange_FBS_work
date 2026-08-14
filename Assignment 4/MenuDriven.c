#include <stdio.h>

int main()
{
    int choice, n, i;
    int count, temp, digit, reverse, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
            {
                printf("Even");
            }
            else
            {
                printf("Odd");
            }
            break;

        case 2:
            count = 0;

            for(i = 1; i <= n; i++)
            {
                if(n % i == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                printf("Prime");
            }
            else
            {
                printf("Not Prime");
            }
            break;

        case 3:
            temp = n;
            reverse = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            if(reverse == n)
            {
                printf("Palindrome");
            }
            else
            {
                printf("Not Palindrome");
            }
            break;

        case 4:
            if(n > 0)
            {
                printf("Positive");
            }
            else if(n < 0)
            {
                printf("Negative");
            }
            else
            {
                printf("Zero");
            }
            break;

        case 5:
            temp = n;
            reverse = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp > 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}