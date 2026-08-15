#include <stdio.h>

int main()
{
    int arr[5], num, found = 0;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &num);

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number Found");
    else
        printf("Number Not Found");

    return 0;
}