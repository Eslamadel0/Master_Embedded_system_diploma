//Eslam adel fathy
#include <stdio.h>
int prime(int x, int y);
int main (void){

   //variables
   int num_1,num_2;
   int res;
   //output
   printf("enter two numbers :");
   scanf("%d %d",&num_1,&num_2);
   //call function
   res=prime(num_1,num_2);
   printf("\n primer numbers between %d and %d is :%d",num_1,num_2,res);


}
int prime(int x, int y){

    //variables
    int i;

    //process
    for (i=x; i<=y; i++)
    {
        if(i%2!=0 && i%3!=0)
            printf("%d \n",i);
        else if (i==3 || i==2)
            printf("%d \n",i);
    }
    return 1;

}
