#include<stdio.h>
int main(){
	int a=20;
	int b=40;
	int temp;
	
	 printf("Before swapping a=%d b=%d\n",a,b);
	 
	 temp=a;
	 a=b;
	 b=temp;
	 
	 printf("After swapping a=%d b=%d",a,b);
	 
	 return 0;
	 
	 
}