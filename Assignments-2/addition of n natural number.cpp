#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b;
	printf("Enter a number ");
	scanf("%d",&n);
	b = n*(n+1)/2;
	printf("The sum of natural number of series %d is %d",n,b);
	getch();
}
