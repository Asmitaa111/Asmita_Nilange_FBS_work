#include<stdio.h>
int main()
{
	int celsius;
	int fahrenheit;
	
	printf("Enter the temperature in celsius ");
	scanf("%d",&celsius);
	
	fahrenheit=(celsius*9/5)+32;
	
	printf("Temperature in farhenheit is %d", fahrenheit);
	return 0;
	
	
}