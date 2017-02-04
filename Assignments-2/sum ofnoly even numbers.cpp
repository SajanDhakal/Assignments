#include<stdio.h>
#include<conio.h>
int main()
{
	int a=20,b,c=0,d=0;
	while(a>=1){
		printf("enter a number");
		scanf("%d",&b);
		if (b%2==0){
			c= b + d;
			d = c;
			}
		a--;				
	}
	printf("The sum of even numbers is %d",d);
	getch();
}
