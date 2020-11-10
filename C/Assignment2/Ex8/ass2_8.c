/*
 * ass2_8.c
 *
 *  Name : Assignment 2 -Ex 8
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to make a simple calculator
 */

#include <stdio.h>
void main ()
{
	char operation;
	float num1,num2;
	double result;
	printf ("Enter operator either + or - or * or / \n");
	fflush(stdout);
	scanf ("%c",&operation);
	printf ("Enter TWo operand \n");
	fflush(stdout);
	scanf ("%f %f",&num1,&num2);
	switch (operation)
	{
	case '+': result=num1+num2;
	break;
	case '-': result = num1-num2;
	break;
	case '*': result = num1 * num2;
	break;
	case '/': result =num1/num2;
	break;
	default: printf ("Invalid operator \n");
	}
	printf ("%0.2f %c %0.2f = %0.2f",num1,operation,num2,result);
}

