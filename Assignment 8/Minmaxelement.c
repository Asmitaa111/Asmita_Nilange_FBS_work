#include <stdio.h>

int main()
{
    int arr[5], min, max;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    min = max = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}