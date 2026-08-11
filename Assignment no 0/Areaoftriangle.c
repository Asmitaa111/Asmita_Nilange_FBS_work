#include<stdio.h>
int main()
{
	int base,height;
	float area;
	 printf("Enter the base of trainagle:");
	 scanf("%d",&base);
	 printf("Enter the height of triangle:");
	 scanf("%d",&height);
	 
	 area= 0.5*base*height;
	 
	 printf("the area of triangle is %f",area);
	 return 0;
}