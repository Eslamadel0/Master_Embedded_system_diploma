/*
 * ass4.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variable
	int x;
	printf("enter the number you want to check \n");
        scanf("%d",&x);
        //process
    if(x>=0)
    	printf("the number is positive : %d \n",x);
    else
    	printf("the nmuber is negative : %d",x);
}
