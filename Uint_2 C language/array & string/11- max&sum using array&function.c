// Eslam adel fathy
#include <stdio.h>
#define size 5
int sum (int a[],int n);
int max (int b[],int n);
int main (void){

    int days[size]={22,33,44,55,66};
    int res_1;
    int res_2;

    res_1=sum(days,size);
       printf("the sum of arrays is : %d\n",res_1);
    res_2=max(days,size);
       printf("the max of arrays is : %d\n",res_2);



}

int sum (int a[],int n)
{
    int i;
    int s=0;
        for (i=0; i<n; i++)
             s+=a[i];
    return (s);
}

int max (int b[],int num)
{
    int i;
    int m;

    m=b[0];
        for (i=0; i<num; i++)
        {
            if (b[i]>m)
                m=b[i];
        }
        return  (m);
}
