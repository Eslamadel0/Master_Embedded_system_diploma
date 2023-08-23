/*
 * ass5.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){

	// variable declaration
	char c;
	printf("Enter a character: \n");
	scanf("%c",&c);
        //process
	if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		printf(" %c is an alphabet \n",c);
	else
		printf(" %c is not an alphabet \n",c);
}
