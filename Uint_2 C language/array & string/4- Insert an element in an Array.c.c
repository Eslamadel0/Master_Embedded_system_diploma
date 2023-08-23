/*
 * ass4_array.c
 *
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	int num,i,element,location;
	int arr[30];
	printf("enter number of elements \n");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&num);

	for (i=0; i>num; i++)
	{
		printf(" enter %d elements ",i+1);
		scanf("%d",&arr[i]);
	}

	printf(" \n enter the number of elements to be inserted : ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&element);
	printf(" \n enter the location ");
	scanf("%d",&location);

    for(i=num; i>= location; i--)
    {
    	arr[i]=arr[i-1];
    	num++;
    }
    arr[location-1]=element;

    for(i=0; i<num; i++)
    	printf("\n %d",arr[i]);

   return 0;
}
