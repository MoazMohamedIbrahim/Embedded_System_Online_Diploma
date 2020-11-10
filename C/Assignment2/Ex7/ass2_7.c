/*
 * ass2_7.c
 *
 *  	Name : Assignment 2 -Ex 7
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to find a factorial of a Number
 */
#include <stdio.h>
void main ()

{
	int n;
	unsigned long long factorial=1;
	int i;
	printf ("Enter an Integer :\n ");
	fflush(stdout);
	scanf ("%d",&n);
	if (n<=0)
	{
		printf ("ERROR !! Factorial of negative number doesnt exist \n");

	}
	else
	{
		for (i=1;i<=n;i++)
		{
			factorial*=i;
		}
	printf ("factorial = %ld ",factorial);
	}
}

