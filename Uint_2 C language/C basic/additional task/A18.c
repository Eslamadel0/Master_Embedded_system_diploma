/*
 * A18.c
 *
 *  Created on: Feb 28, 2023
 *      Author:  Eslam adel fathy
 Description :Write a program to display half pyramid using stars pattern.
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	int n,i,j;
	printf("enter thr number : \n");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}

}
 */
