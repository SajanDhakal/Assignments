#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    double power();
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    printf("%d to power %d is = %f\n",x,y,power(x,y));
}
double power(x,y)
int x,y;
{
    double p;
    p=1.0;
    if(y>=0)
        while(y--)
            p*=x;
    else while(y++)
            p/=x;
    return p;
}