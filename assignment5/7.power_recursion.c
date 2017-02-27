#include <stdio.h>

int getPower(int,int);
int main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);
    
    result = getPower(base, exponent);
    
    printf("%d^%d = %d", base, exponent, result);

    return 0;
}
int getPower(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    return base * getPower(base, exponent - 1);
}