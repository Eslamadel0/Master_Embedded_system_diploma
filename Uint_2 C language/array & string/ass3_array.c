/*
 * ass3_array.c
 *      Author: eslam adel fath

#include <stdio.h>
#include <stdlib.h>
int main (void){

	//variable
	float a[10][10],b[10][10];
	int row,col;
	int i,j;
	setbuf(stdout,NULL);
	printf("enter number of matrix");
	scanf("%d %d",&row,&col);
	//process
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("enter elements a[%d][%d]\n",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("the matrix a \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%.4f \t",a[i][j]);
		}
		printf("\n");
	}
	printf("the transpose of matrix \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%.4f\t",b[i][j]);
		}
		printf("\n");
	}
}
*/
