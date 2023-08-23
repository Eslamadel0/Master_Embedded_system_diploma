/*
 * A14.c
 *
 *  Created on: Feb 28, 2023
 *      Author: Eslam adel fathy
Description :Write a program to display English alphabets from A to Z.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	char ch;

	//process
	for(ch='A'; ch<='Z'; ch++)
	{
		printf(" %c\n",ch);
	}
	}
