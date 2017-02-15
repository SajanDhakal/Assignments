#include<stdio.h>
int twin_prime(int a,int b){
	if (b-a==2)
		{
			printf("%d-%d\n",a,b );
		}
}
int main(){
	int f=0,a[500],n=0;
	for (int i = 2; i <= 500; ++i)
	{
		f=0;
		for (int j = 1; j <= i; ++j)
		{
			if (i%j==0)
			{
				f++;
			}
		}
			if (f==2)
				{
					a[n]=i;
					n++;
				}	
		
	}
	for (int i = 0; i <n-1; ++i)
	{
		twin_prime(a[i],a[i+1]);
	}
	return 0;
}