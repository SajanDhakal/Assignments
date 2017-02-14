/*Program to check whether a number is divisible by 5 and 7
using no return no argument function*/
#include<stdio.h>
void div();
void nodiv();
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if (a%5==0&&a%7==0)
	{
		div();
	}
	else{
		nodiv();
	}	
}
void div(){
	printf("The number is divisible by 5 and 7");
}
void nodiv(){
	printf("the number is not divisible by 5 and 7\n");
}
