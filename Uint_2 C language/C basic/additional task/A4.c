/*
 * A4.c
 *
 *  Created on: Feb 26, 2023
 *      Author: Eslam adel fathy
Description : Write a program that reads the radius of a circle and calculates the area and circumference then prints the results.
*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main (void){

	setbuf (stdout,NULL);
	// variable declaration
	float area ,r;
	printf("Enter the radius of the circle : \n");
	scanf("%f",&r);
    //process
    area=PI*r*r;
    printf("circumference of a circle : %.2f \n",area);

}
