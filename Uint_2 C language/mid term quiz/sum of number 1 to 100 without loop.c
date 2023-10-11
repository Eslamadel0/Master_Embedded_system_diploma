#include <stdio.h>
int sum_number(int num);
int main (void){

    //variables declaration
    int num=100;
    int sum;
    //calling function

    sum =sum_number(num);
    printf("%d",sum);
}
int sum_number(int num){

   //variables declaration
   int res=0;
   //process
   if (num!=0)
   {
       sum_number(num-1);
       res+=num;
   }

   return (res);

}
