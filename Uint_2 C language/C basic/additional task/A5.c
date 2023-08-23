/*
 * A5.c
 *
 *  Created on: Feb 26, 2023
 *      Author: Eslam adel fathy
Description :Write a program to print the ASCII value of a character 
*/
input by the user.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
    char ch;
    printf("enter  character you want to check ASCII value : \n");
    scanf("%c",&ch);
    printf("the ASCII value is : %d",ch);
}