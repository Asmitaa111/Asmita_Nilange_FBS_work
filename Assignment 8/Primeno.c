#include <stdio.h>

int main()
{
    int arr[5], flag;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        flag = 1;

        if(arr[i] < 2)
            flag = 0;

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}