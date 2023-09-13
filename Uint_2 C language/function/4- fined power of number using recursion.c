// Eslam adel fathy
#include <stdio.h>
int power(int r, int p);
int main(void){

     //variables
     int num;
     int pow;
     int res;
     //output
     printf("enter the number : ");
     scanf("%d",&num);
     printf("\n enter power of number (positive integer):");
     scanf("%d",&pow);
     //process
     res=power(num,pow);
     printf("the number is %d and power is %d  = %d ",num,pow,res);

}
int power(int r, int p){

    //variables
    int i=0;
    i=p;
    //process
    if (i!=0)
        return (r*power(r,p-1));
    else
        return 1 ;
}
