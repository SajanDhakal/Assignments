#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, f = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if (n<=1)
    printf("A number is not a prime number");
    else if (f==0)
        printf("%d is a prime number.",n);
    else 
        printf("%d is not a prime number.",n);
    
    getch();
}
