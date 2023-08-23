/*
 * A12.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description : Write a program that reads a positive integer and 
computes the factorial.*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
    int i,n;
    long long  f=1;
    printf("enter number : \n");
    scanf("%d",&n);
  //process
     if (n<0)
    printf("Error! Factorial of a negative number doesn't exist.");
     else
  {
     for (i=1;i<=n; i++)
     {
    	f*=i;
     }
    printf("factorial of %d is: %ld ",n,f);
  }
    return 0;
}
