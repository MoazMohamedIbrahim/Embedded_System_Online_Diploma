/*
 * lab1.c
 *
 *  	Name : Lab 1
 *      Author: Moaaz Mohamed Ibrahim
 *      Description : C program draw a certain shape
 */
#include <stdio.h>
int main ()
{
	int i,j,n;
	printf ("Enter an integer \n");
	fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<=n;i++)
	{
		for (j=i;j<=n;j++)
		{
			printf ("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

