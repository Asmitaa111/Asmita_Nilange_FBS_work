#include<stdio.h>
int main()
{
int minutes,hours,remeaning_minutes;

printf("Enter minutes:");
scanf("%d",&minutes);

hours= minutes/60;
remeaning_minutes=minutes%60;

printf("Hours of given minutes is:%d\n remeaning minutes is: %d",hours,remeaning_minutes);

}