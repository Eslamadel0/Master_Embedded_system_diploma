/*
 * ass2.c
 *
 *  Created on: Feb 24, 2023
 *      Author: Eslam adel fathy
*/
#include <stdio.h>
#include <stdlib.h>
int main (void){

        // variable declaration 
	char c;
	printf("enter the alphabet : \n");
	scanf("%c",&c);
        //process
	if (c=='a'||c=='A'||c=='u'||c=='U'||c=='o'||c=='O'||c=='e'||c=='E'||c=='i'||c=='I')

		printf("the alphabet is vowel \n");
	else
		printf("the alphabet is consonant \c");
}

