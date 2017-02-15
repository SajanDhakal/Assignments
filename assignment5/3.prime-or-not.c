#include<stdio.h>
int prime(int n){
	int f=0;
	for (int i = 2; i < n; ++i)
	{
		if (n%i==0)
		{
			f=1;
			break;
		}
	}
	return f;
}
int main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if (prime(n)==0)
	{
		printf("The number is a prime number\n");
	}
	else{
		printf("The number is not a prime number\n");
	}
	return 0;
		
}