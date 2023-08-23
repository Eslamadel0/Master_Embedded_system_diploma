/*
 * ass5_array.c
 *
 *  Created on: ٢٣‏/٠٨‏/٢٠٢٣
 *      Author:Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variables
	int i,num,element;
	int arr[30];
	//process
	printf("enter number of elements \n");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&num);
	printf("enter the element ");
	for (i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	fflush(stdin);    fflush(stdout);
	printf(" \n enter the elements to be searched :\n");
	scanf("%d",&element);
    i=0;
	while(i<num&&element != arr[i])
	{
		i++;
	}

	if (i<num)
		printf("the number found and its location %d",i+1);
	else
		printf("number is not found");
}
