/*
 * ass2_3.c
 *
 *  Name : Assignment 2 -Ex 3
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program to To find the largest number among three numbers
 */
#include <stdio.h>
void main ()
{
	int num1,num2,num3,Max_num;
	printf ("Enter Three Numbers \n");
	fflush (stdout);
	scanf("%d %d %d",&num1,&num2,&num3);
	Max_num=num1;
	if (num2>Max_num)
	{
		Max_num=num2;

	}
	if (num3>Max_num)
	{
		Max_num=num3;
	}
	printf ("The largest Number is %d\n",Max_num);



}

