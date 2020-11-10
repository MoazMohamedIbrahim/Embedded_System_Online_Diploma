/*
 * ass2_2.c
 *
 *  	Name : Assignment 2 -Ex 2
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to check vowel or constant
 */

#include <stdio.h>

void main ()

{
	char c;
	printf("Enter an alphabet : \n");
	fflush(stdout);
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O')
	{
		printf ("the %c is vowel \n ",c);

	}

	else
	{
		printf("the %c is constant \n",c);
	}

}

