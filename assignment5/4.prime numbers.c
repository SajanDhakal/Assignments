#include<stdio.h>
int prime(){
	int f=0;
	
	for (int i = 2; i <= 500; ++i)
	{
		f=0;
		for(int j=1; j<=i;++j){
			if (i%j==0)
			{
				f++;
			}
		}
		if (f==2)
		{
			printf(" %d",i);
		}
	}
	return 0;
}
int main(){
	printf("The prime numbers are\n");
	prime();
	return 0;
}