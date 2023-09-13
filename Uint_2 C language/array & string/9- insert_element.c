// Eslam adel fathy
#include <stdio.h>
#define maxsize  20
int output(int a[], int n);
int main (void){

     //variables
     int data[maxsize];
     int n,i;
     int newline,position;

     //output
     printf("enter size of array between 20 :");
     scanf("%d",&n);

     //process
     for (i=0; i<n; i++)
     {
         printf("value [%d] :",i+1);
         scanf("%d",&data[i]);
     }

     //output
     printf("\n please enter new item  :");
     scanf("%d",&newline);

     printf("\n enter position to be inserted in array :");
     scanf("%d",&position);
     //process
     for (i=n; i>=position; i--)
     {
         data[i+1]=data[i];
     }
     data[position]=newline;

     n++;

     printf("the element of value is \n");
     for (i=0; i<n; i++)
     {
         printf("value [%d] : %d \n",i,data[i]);
     }

}
