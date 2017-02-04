#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b=0;
	printf("Enter a number");
	scanf("%d",&a);
	while(a>=b){
		b++;
		if (a%b==0){
			printf("%d ,",b);
		}
		}
    printf(" are the divisor of %d",a);
    getch();
}
