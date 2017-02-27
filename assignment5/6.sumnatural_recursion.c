#include <stdio.h>
int addNumbers(int n);

int main()
{
    
    printf("Sum = %d",addNumbers(10));
    return 0;
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}