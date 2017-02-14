#include<stdio.h>
int d5(int a){
	return a%5;
}
int d7(int a){
	return a%7;
}
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if (d5(a)==0&&d7(a)==0)
	{
		printf("The number is divisible by 5 and 7");
	}
	else{
		printf("The number is not divisible by 5 and 7");
	}
	return 0;
}