/*
 * ass1_7.c
 *		Name : Assignment 1 - Ex 7
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C Program to Swap Two numbers Without temp variable
 */
#include <stdio.h>

void main ()
{
	float num1 , num2;
	printf ("Enter Two numbers \n");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf ("After Swapping , Value of num1 : %0.2f \n",num1);
	printf ("After Swapping , Value of num2 : %0.2f \n",num2);
}




