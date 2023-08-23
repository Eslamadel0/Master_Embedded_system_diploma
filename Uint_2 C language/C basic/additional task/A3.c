/*
 * A3.c
 *
 *  Created on: Feb 26, 2023
 *      Author: Eslam adel fathy
Description : Write a program for converting temperature from degrees Celsius to degrees Fahrenheit,given the formula
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	float temp,f;
	printf(" enter temperature from degrees Celsius :\n");
	scanf("%f",&temp);

	//process
	f=temp*(9.0/5.0)+32;
	printf("the degrees Fahrenheit : %.2f \n",f);

}