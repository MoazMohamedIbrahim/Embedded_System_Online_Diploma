/*
 * haga.c
 *
 *  Created on: Dec 30, 2020
 *      Author: Moaaz
 */
#include <stdio.h>
int main ()
{
	int i ;
	float degrees[3];
	fflush(stdin); fflush(stdout);
	for (i=0;i<3;i++)
	{
		printf("Enter the student %d \n",i+1);
		scanf("%f",&degrees[i]);

	}
	for (i=0;i<3;i++)
	{
		printf("The student %d is %f \n",i+1,degrees[i]);

	}
	return 0;
}

