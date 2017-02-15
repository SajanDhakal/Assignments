/*program to read n numbers in an array and 
remove the dublicate numbers from an array*/
#include<stdio.h>
int main(){
	int n,f=0,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter %d number",n );
	for (int i = 0; i < n; ++i)
	{	
		scanf("%d",&a[i]);
	}
	printf("Original numbers are:");
	for (int i = 0; i < n; ++i)
	{	
		printf(" %d",a[i]);
	}

	for (int j = 0; j < n; ++j)
	{
		for (k = j+1; k < n;)
		{
			if (a[k]==a[j])
			{
					for (int i = k; i < n; ++i)
					{
						a[i]=a[i+1];
					}
				n--;	
			}
			else{
				k++;
			}
		}	
		
	}
	printf("\nArray obtained after removing duplicate elements");	
	for (int l = 0; l < n; ++l)
	{
		printf(" %d",a[l] );
	}
return 0;	
}
