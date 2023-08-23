/*
 * ass2_array.c
 *      Author: eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variables
	float num[100];
	float sum,average;
	int n,i;
	//process
	setbuf(stdout,NULL);
    printf("enter number of data");
    scanf("%d",&n);
    if(n>100 || n<=0)
    {
    	printf("error!! number out of range(1 to 100) \n");
    	printf("enter the number again\n");
    	scanf("%d",&n);
    }
    else
    	for(i=0; i<n; i++)
    	{
           printf("%d enter number \n",i+1);
           scanf("%f",&num[i]);
           sum+=num[i];
    	}
    average=sum/n;
    printf("average = %.4f \n",average);

}
