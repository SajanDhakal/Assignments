#include <stdio.h>
void divisor(int a){
 for(int i=1; i <= a; ++i)
    {
        if (a%i == 0)
        {
            printf("%d ",i);
        }
    }
    
}
void main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    printf("Factors of %d are: ", number);
   
    divisor(number);
    
}