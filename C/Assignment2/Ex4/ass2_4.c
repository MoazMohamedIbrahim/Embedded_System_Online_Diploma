/*
 * ass2_4.c
 *
 *  Name : Assignment 2 -Ex 4
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to check The number is positive or negative
 *
 */
#include <stdio.h>
void main ()
{
	float num;
	printf ("Enter Any Number \n");
	fflush (stdout);
	scanf("%f",&num);
	if (num>=0)
	{
		printf ("The %f is positive \n",num);
	}
	else
	{
		printf("The %f is negative \n",num);
	}

}

