#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Checks is input is positive or not
 * @i: Random interger
 * Return: Zero
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
