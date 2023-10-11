//eslam adel fathy
#include <stdio.h>
int count_ones_between_twozeros(int num);
int main (void){

    //variables declaration
    int num,res;
    //output and input
    printf("enter the number :");
    scanf("%d",&num);
    //calling function
    res=count_ones_between_twozeros(num);
    printf("\n %d",res);

}
int count_ones_between_twozeros(int num){

     //variables declaration
     int coun=0;
     //process
     while (num !=0)
     {
         num= (num&(num<<1));
         coun++;
     }

       return (coun);
}
