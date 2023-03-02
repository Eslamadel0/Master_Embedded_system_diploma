/*
 * A17.c
 *
 *  Created on: Feb 28, 2023
 *      Author: Eslam adel fathy

#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	long int n;
	int count;
	printf("enter the number : \n");
	scanf("%ld",&n);
	//process
	while(n!=0)
	{
		n/=10;
		count++;
	}
	printf("Number of digits: %d", count);
}
*/
