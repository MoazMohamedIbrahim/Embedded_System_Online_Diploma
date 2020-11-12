/*
 * ass1_6.c
 *
 *    	Name : Assignment 1 - Ex 6
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C Program to Swap Two numbers
 */

#include <stdio.h>

void main ()
{
	float num1,num2,temp;
	printf ("Enter Two Numbers \n ");
	fflush(stdout);
	scanf ("%f %f",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("After Swapping , value of num1 = %f\n",num1);
	printf ("After Swapping , value of num2 = %f\n",num2);


}

