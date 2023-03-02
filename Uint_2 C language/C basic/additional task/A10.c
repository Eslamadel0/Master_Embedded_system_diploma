/*
 * A10.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description :  Write a program to make a simple calculator using 
switch-case
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	char op;
	float num1,num2;
	printf("enter  operator( + or - or * or /) \n");
	scanf("%f %c %f",&num1,&op,&num2);

	if (op=='+')
	{
		printf("%.2f \n",num1+num2);
	}
	else if (op=='-')
	{
		printf("%.2f \n",num1-num2);
	}
	else if(op=='/')
	{
		printf("%.2f \n",num1/num2);
	}
	else if(op=='*')
	{
		printf("%.2f \n",num1*num2);
	}

}
*/
