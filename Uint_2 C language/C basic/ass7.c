/*
 * ass7.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variables
	int x,y=1;
	unsigned long fac=1;
	printf("enter the number you want to find factorial \n");
	scanf("%d",&x);
        //process
	if(x<0)
		printf("the number is negative \n");
	else
		for(y=1; y<=x; y++)
		{
			fac*=y;
		}
	printf("factorial of number = %d  \n factorial = %u ",x,fac);

}
