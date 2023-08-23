/*
 * A11.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description : Print sum of first 100 integers. (With data validation)
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
    // variable declaration
    int i;
    int sum=0;
    //process
    for(i=1; i<=100; i++)
    {
    	sum+=i;
    }
    printf("sum is = %d \n",sum);

    if(sum==5050)
    {
    	printf("sum of the first 100 integer numbers is correct\n");
    }
    else
    	printf("sum of the first 100 integer numbers is not correct\n");
}
