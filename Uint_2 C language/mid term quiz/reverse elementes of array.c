#include <stdio.h>
#define max 10
int main (void){

   //variables declaration
   int arr_1[max],arr_2[max];
   int num,i,j;
   //output and input
   printf("enter range of element of array :");
   scanf("%d",&num);

   //process
   for (i=0; i<num; i++)
   {
       printf("value [%d] :",i);
       scanf("%d",&arr_1[i]);
   }
   //output of array
   printf("output of array \n");
      for (i=0; i<num; i++)
   {
       printf("value [%d] : %d \n",i,arr_1[i]);

   }

      for (i=num,j=0; i>0; i--,j++)
   {
         arr_2[j]=arr_1[i-1];
   }
   //output of array
    printf("output of  reverse array \n");
      for (i=0; i<num; i++)
   {
       printf("value [%d] : %d \n",i,arr_2[i]);

   }
}
