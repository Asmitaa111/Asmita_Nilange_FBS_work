#include <stdio.h>

int main()
{
    int radius;
    double area;
    double pi = 3.14;

    printf("Enter the radius of circle: ");
    scanf("%d", &radius);

    area = pi * radius * radius;

    printf("Area of circle is %f", area);

    return 0;
}
