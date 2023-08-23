/*
 * A16.c
 *
 *  Created on: Feb 28, 2023
 *      Author:  Eslam adel fathy
Description :Write a program to reverse a number.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	int n, reverse =0,remainder=0;
	printf("enter the number you want to reverse : \n");
	scanf("%d",&n);
	//process
	while(n!=0)
	{
		remainder=n%10;
		reverse = reverse *10 + remainder;
		n/=10;
	}
       printf("Reversed number = %d", reverse);
}
