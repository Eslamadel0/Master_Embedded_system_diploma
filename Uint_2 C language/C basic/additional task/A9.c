/*
 * A9.c
 *
 *  Created on: Feb 27, 2023
 *      Author:  Eslam adel fathy
Description : Write a program that reads a student grade percentage
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	setbuf(stdout,NULL);
	// variable declaration
	int grade;
	printf("enter a student grade :\n");
	scanf("%d",&grade);
	//process
	if(grade>=85)
	{
		printf(" the student grade is Excellent  \n");
	}
	else if (grade>=75)
	{
		printf(" the student grade is very good  \n");
	}
	else if (grade>=65)
	{
		printf(" the student grade is good \n");
	}
	else if (grade>=50)
	{
		printf(" the student grade is pass  \n");
	}
	else
		printf(" Fail  \n");
	return 0;
}