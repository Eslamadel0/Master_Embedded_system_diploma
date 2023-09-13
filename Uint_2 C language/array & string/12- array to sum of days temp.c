// Eslam adel fathy
#include <stdio.h>
int main (void){

    int days[365];
    int i;
    int n;
    int max=0;
    int sum;

       do
       {   printf("days[%d]",i+1);
           scanf("%d",&days[i]);

       }while(days[i++]>0);

       n=--i;
       printf("\n data  stored in arrays is \n ");
       for(i=0; i<n; i++)
       {
           printf("\n value in position [%d] is %d \n",i+1,days[i]);
       }

       for(i=0; i<n; i++)
       {
           if (days[i]>max)
            max=days[i];
       }
       printf("max temp of day is %d\n",max);

}
