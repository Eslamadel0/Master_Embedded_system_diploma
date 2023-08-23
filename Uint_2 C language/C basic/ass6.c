/*
 * ass6.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variables
	int sum,x,y=1;
	printf("enter the number \n");
	scanf("%d",&x);
        //process
	for (y=1; y<=x; y++)
	{
      sum+=y;
	}
	printf("the value of number is : %d",sum);
}
