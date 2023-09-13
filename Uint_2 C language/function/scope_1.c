// Eslam adel fathy
#include<stdio.h>
void move(int n ,char a,char b,char c );s
void main(void){

   int n;
   char a='1';
   char b='2';
   char c='3';

   printf("enter number :");
   scanf("%d",&n);
   move(n,a,c,b);
}
void move(int n ,char a,char b,char c )
{
   if(n==1)
    printf("move disk from %c to %c \n",a,b);
   else
   {
       move (n-1,a,b,c);
           printf("move disk from %c to %c \n",a,c);
       move(n-1,b,c,a);
   }

}
