#include<stdio.h>
int palindrome(int a,int b){
	if (a==b)
	{
		printf("The number is palindrome\n");
	}
	else{
		printf("THe number is not palindrome\n");
	}
	return 0;
}
int main()
{
    int a, b,c,sum=0;
    printf("Enter a number");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
    	b= a%10;
    	a=a/10;
    	sum= sum*10 +b;
    }
    palindrome(c,sum);
	return 0;
}