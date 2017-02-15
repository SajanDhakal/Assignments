#include<stdio.h>
#include<math.h>

int power(int a,int b);
void main()
 {
  int x,y;
  printf("enter the x:");
  scanf("%d",&x);
  printf("enter the y:");
  scanf("%d",&y);
  power(x,y);
 }
int power(int a,int b)
 {
  double c;
  c=pow(a,b);
  printf("\n ans=%lf",c);
  return 0;
 }