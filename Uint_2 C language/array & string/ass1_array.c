/*
 * ass1_array.c
 *
 *  Created on: ٠١‏/٠٥‏/٢٠٢٣
 *      Author: NoteBook

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void){

	//variable
	float a[2][2],b[2][2],sum[2][2];
	int row,col;
	//process
	setbuf(stdout,NULL);
	printf("enter number of matrix \n");

	for (row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("enter a [%d][%d]",row+1,col+1);
			scanf("%f",&a[row][col]);
		}

	}
	printf("matrix one \n");
	for(row=0; row<2; row++)
	{
		for (col=0; col<2; col++)
		{
			printf("%.2f\t",a[row][col]);
		}
		printf("\n");
	}
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("enter b [%d][%d]",row+1,col+1);
			scanf("%f",&b[row][col]);
		}
	}
	printf("matrix two \n");
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("%.2f\t",b[row][col]);
		}
		printf("\n");
	}
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			sum[row][col]=a[row][col]+b[row][col];
		}
	}
	printf("the sum matrix \n");
	for(row=0; row<2; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("%.2f\t",sum[row][col]);
		}
		printf("\n");
	}
	return 0;
}
*/
