/*
 * ass6_array.c
 *
 *  Created on: ٢٣‏/٠٨‏/٢٠٢٣
 *      Author:Eslam adel fathy

#include <stdio.h>
#include <stdlib.h>
int main (void){

	char ch, op[100];
	int i,count=0;

	  printf("enter your string \n");
	  fflush(stdin);      fflush(stdout);
	  gets(op);
	  printf("enter the character to find frequency :\n");
	  fflush(stdin);      fflush(stdout);
	  scanf("%c",&ch);

	  for(i=0; op[i]!='\0'; ++i)
	  {
         if (ch==op[i])
         {
        	 ++count;
         }
	  }
	    printf("frequency of %c is =%d",ch,count);

}
*/
