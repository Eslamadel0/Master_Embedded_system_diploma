/*
 * A6.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description : Write a program that print the relation between two 
integer number if those numbers are equal, not equal and 
which one contain the higher value.
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
    int num1,num2;
    printf("enter two numbers :\n ");
    scanf("%d %d",&num1,&num2);

    if (num1==num2)
    {
    	 printf(" number one is equal number two \n ");
    }
    else if (num1<num2)
    {
    	 printf("number one less number two \n ");
    }
    else
    	printf(" number one is greater nimber two :\n");

}