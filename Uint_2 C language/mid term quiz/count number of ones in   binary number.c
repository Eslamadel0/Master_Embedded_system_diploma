//eslam adel fathy
#include <stdio.h>
int count(int n);
int main (void){

    //variables declaration
    int num;
    int res=0;

    //output and input
    printf("enter your number :");
    scanf("%d",&num);

    res = count(num);
    printf("\n the numbers of one in number is %d :",res);

}
int count(int n){

    //variables declaration
    int i ,num=0;
    //output and input
    for (i=0; i<32; i++)
    {
        if (n&(1<<i))
            num++;
    }
       return (num);
}
