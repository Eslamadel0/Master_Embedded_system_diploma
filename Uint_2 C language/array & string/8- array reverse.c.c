/*
 * ass8_array.c
 *
 *  Created on: ٢٣‏/٠٨‏/٢٠٢٣
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <string.h>
int main(void){

	char ch[100],arr;
	int j=0,i=0;

	   printf("enter the string :\n");
	   fflush(stdin);  fflush(stdout);
	   gets(ch);
	   //process
	   j=strlen(ch)-1;

	   while(i<j)
	   {
		   arr=ch[i];
		   ch[i]=ch[j];
		   ch[j]=arr;

		   i++;
		   j--;
	   }
	      printf("\n  reverse string is : %s",ch);
	     return 0;
}
