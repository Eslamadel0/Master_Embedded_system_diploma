// Eslam adel fathy
#include <stdio.h>
int fact(int n);
int main(void){

   //variables
   int n;
   int f;
   //output
   printf("enter the number to factorial :");
   scanf("%d",&n);
   //process
   f=fact(n);
   printf("the factorial of number %d is :%d ",n,f);
}
int fact(int n){

   //variables
   int f=1;
   //process
        if (n!=1)
       f*=fact(n-1);
     return (f);
}
