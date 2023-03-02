/*
 * A7.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy

#include <stdio.h>
#include <stdlib.h>
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	int a,b,c;
	int small;
	printf("enter three numbers : \n");
	scanf("%d %d %d",&a,&b,&c);
	small=a;
	//process
    if(b<small)
    {
    	small=b;
    }
    if(c<small)
    {
    	small=c;
    }
    printf("the smallest number is = %d",small);
    return 0;
}
 */
