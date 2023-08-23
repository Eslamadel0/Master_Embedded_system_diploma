/*
 * A19.c
 *
 *  Created on: Feb 28, 2023
 *      Author:  Eslam adel fathy
Description :Write a program to display inverted half pyramid using stars pattern.
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	int n,i,j;
	printf("Enter the number of rows: \n");
	scanf("%d",&n);
	//process
	for (i=n; i>=1; --i)
	{
		for(j=1; j<=i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}


}
*/
