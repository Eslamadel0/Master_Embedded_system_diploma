/*
 * A8.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description :Write a program that reads a positive integer and 
checks if it is a perfect square.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	int i,r;
	printf("enter the required number : : \n");
	scanf("%d",&i);
	r=sqrt(i);
	//process
   if (i==(r*r))
   {
	   printf("%d is the perfect square root of %d",r,i);
   }
   else
	    printf("perfect square root not exist");
   return 0;
}