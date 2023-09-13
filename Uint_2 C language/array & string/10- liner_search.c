// Eslam adel fathy
#include <stdio.h>
#define maxsize  100
int main (void){

       //variables
       float data [maxsize];
       float key ;
       int i,n;
       int position =-1;

       //process
       printf("please enter range of array between 100: ");
       scanf("%d",&n);

       for (i=0; i<n; i++)
       {
           printf("value [%d] :",i);
           scanf("%f",&data[i]);
       }

       printf("\n enter key to be located : ");
       scanf("%f",&key);
       position==-1;
       for (i=0; i<n; i++)
        {
           if(data[i]==key)
           {
               position =i;
               break;
           }
        }

    if (position==-1)
            printf("%.3f is not located in data \n",key);
    else
            printf(" %.3f is located in data in position :%d ",key,position);



}
