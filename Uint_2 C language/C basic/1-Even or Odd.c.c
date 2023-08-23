/*
 * ass.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){

	int x=0;

	printf("enter the number you want to check :  \n ");
	scanf("%d",&x);

	if(x%2==0)
		printf("the number is even \n");
	else
		printf("the number is odd \n");

	return 0;
}
