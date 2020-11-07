/*
 * ass1_3.c
 *
 *  	Name : Assignment 1 - Ex 3
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C Program to Add Two Integers
 */

#include <stdio.h>

void main ()
{
	int num_1 , num_2, sum=0;
	printf ("Enter Two Numbers \n");
	fflush(stdout);
	scanf("%d %d",&num_1,&num_2);
	sum = num_1 + num_2;
	printf("The sum is : %d",sum);

}

