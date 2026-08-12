#include <stdio.h>

int main()
{
    int num, original, reverse;
    int first, second, third;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    first = num / 100;          
    second = (num / 10) % 10;  
    third = num % 10;           

    reverse = third * 100 + second * 10 + first;

    if (original == reverse)
    {
        printf("%d is a Palindrome number.", original);
    }
    else
    {
        printf("%d is not a Palindrome number.", original);
    }

    return 0;
}