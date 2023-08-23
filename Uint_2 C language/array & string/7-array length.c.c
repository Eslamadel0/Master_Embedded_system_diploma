/*
 * ass7_array.c
 *
 *  Created on: ٢٣‏/٠٨‏/٢٠٢٣
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){

	//variable
	 char s[100],i;
	 int sum=0;
	//process
	 printf("enter the string \n");
	 fflush (stdin);    fflush (stdout);
	 scanf("%s",&s);
	 for (i=0; s[i]!='\0'; ++i)
	 {
       sum=i+1;
	 }

		 printf("length of string is %d",sum);
}
