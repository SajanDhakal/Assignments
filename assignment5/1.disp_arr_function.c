#include <stdio.h>
 
/* function declaration */
int getAverage(int arr[], int size);

int main () {

   /* an int array with 5 elements */
   int balance[55],n; 
   printf("The elements in array:\n");
   scanf("%d",&n);
   for (int i = 0; i < n; ++i)
   {
   	scanf("%d",&balance[i]);
   }
   

   getAverage( balance, n) ;
 
    
   return 0;
}
int getAverage(int arr[], int size) {

   int i;


   for (i = 0; i < size; ++i) {
      printf("%d\n",arr[i] ); 
   }

   

   return 0;
}
