/*
 * ass8.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){

	// variable declaration
	char c;
	float num1,num2;

	printf("enter  operator( + or - or * or /) \n");
	printf("enter two numbers \n");
        setbuf(stdout,NULL);
	scanf("%f %c %f ",&num1,&c,&num2);
        //process
	switch(c){
	case '+':
		printf(" %.2f",num1+num2);
		break;
	case '-':
		printf(" %.2f",num1-num2);
		break;
	case '*':
		printf(" %.2f",num1*num2);
		break;
	case '/':
		printf(" %.2f",num1/num2);
		break;
	default :
		   printf("Error! operator is not correct");
	}
	return 0;
}
