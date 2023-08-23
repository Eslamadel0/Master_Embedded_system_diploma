/*
 * ass3.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variable
	float a,b,c;
	printf(" enter three number : \n ");
	scanf("%d %d %d",&a,&b,&c);
        //process
	if (a>b&&a>c)
		printf(" the large number is number one \n");
	else if(b>a&&b>c)
		printf("the large number is number two \n");
	else
		printf("the large number is three \n");

}
