#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter a number ");
	scanf("%d",&a);
	if (a>0)

		printf("The number is a positive number");
	else if (a<0)
		printf("THe number is negative number");
	else
		printf("the number is zero");
	getch();
}
