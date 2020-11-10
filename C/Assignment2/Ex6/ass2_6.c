/*
 * ass2_6.c
 *
 * 		Name : Assignment 2 -Ex 6
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to calculate sum of natural numbers
 *
 */
#include <stdio.h>
void main ()
{
	int i, n,sum=0;
	printf("Enter an Integr :\n");
	fflush(stdout);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf ("The sum is %d \n",sum);
}

