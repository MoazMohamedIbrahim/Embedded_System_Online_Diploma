/*
 * ass2_1.c
 *
 *  	Name : Assignment 2 - Ex1
 *      Author: Moaaz Mohamed Ibrahim
 *      Description: C program To check Whether number is even or odd
 */

#include <stdio.h>
void main ()

{
	int num;
	printf("Enter The number You Want to Check \n");
	fflush(stdout);
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("The %d is even\n",num);
	}

	else
	{
		printf ("The %d is odd \n",num);
	}
}

