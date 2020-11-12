/*
 * ass2_5.c
 *
 *  	Name : Assignment 2 -Ex 5
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to check charcater is alphabet or not
 *
 */

#include <stdio.h>
void main ()
{
	char c;
	printf ("Enter an alphabet \n");
	fflush(stdout);
	scanf("%c",&c);
	if ((c=='a'&&c=='z')||(c=='A'&&c=='Z'))
	{
		printf ("The %c is alphabet \n",c);

	}
	else
	{
		printf("The %c not alphabet \n",c);
	}
}
