#include <stdio.h>

/**
 * The function below illustrates priniting of half a 5*5 square, with only two output statements
 *
 **/

int main(void)
{
	for (int row = 1; row <= 5; row++)
	{
		for (int hashNum = 1; hashNum <= 6 - row; hashNum++)
	{
		printf("#");
	}
		printf("\n");
	}
	return 0;
}
