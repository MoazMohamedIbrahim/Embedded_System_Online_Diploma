/*
 * ass1_4.c
 *
 *  	Name : Assignment 1 - Ex 4
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C Program to Multiply two Floating Point Numbers
 *
 */

#include <stdio.h>

void main ()
{
	float num1,num2;
	double mul;
	printf("Enter Two Numbers: \n");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	mul = num1 * num2;
	printf("Answer is : %f \n",mul);

}



