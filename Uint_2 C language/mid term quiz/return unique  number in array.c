//eslam adel fathy
#include <stdio.h>
int unique_num(int a[],int size);
int main (void){

   //variables declaration
   int arr[]={4,2,4};
   int size,res;
   //output and processing
   size=sizeof(arr)/sizeof(arr[0]);

   res= unique_num(arr,size);
   printf("unique number is array is = %d ",res);

   return 0;
}
int unique_num(int a[],int size){

    //variables declaration
    int i;
    int res=0;
    //process
    for (i=0; i<size; i++)
    {
        res^=a[i];
    }
    return (res);
}
