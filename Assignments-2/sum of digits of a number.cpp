#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=0;
	printf("enter a number");
	scanf("%d",&a);
	while(a>0 ){
		b= a%10;
		a= a/10;
		c= b+c;
		}
	printf("The sum of the digits is %d",c);
	getch();
}
