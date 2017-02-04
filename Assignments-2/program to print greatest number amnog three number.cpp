#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter seconf number");
	scanf("%d",&b);
	printf("Enter third number");
	scanf("%d",&c);
	if (a>b && a>c)
	printf("%d is the greatest number",a);
	else if (b>a && b>c)
	printf("%d is the greatest number",b);
	else
	printf("%d is the greatest number",c);
	getch();
}
