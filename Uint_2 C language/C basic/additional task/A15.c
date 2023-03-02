/*
 * A15.c
 *
 *  Created on: Feb 28, 2023
 *      Author: Eslam adel fathy
Description :Write a program to calculate the power of a number.
The number and its power are input from user.
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	int base, exp;
	float resulat=1.0;
	printf("enter a base number : \n ");
	scanf("%d",&base);
	printf("Enter an exponent ");
	scanf("%d",&exp);

	//process
	while(exp !=0)
	{
        resulat *=base;
        --exp;
	}
	printf(" number a base : %d    number of exponent :%.2f",base,resulat);

	return 0;
}
 */
