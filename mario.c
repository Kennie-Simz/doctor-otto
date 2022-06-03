#include <stdio.h>

/**
 * prints a mario staircase, similar to the halfsquare but inverted
 **/

int main(void)
{
	int height;
	do
	{
		printf("Enter mario's steps between 1 -8: ");
		scanf("%d\n", &height);
	}
	while (height < 1 || height > 8);

	for (int i = 0; i < height; i++)
	{
		for(int j = 0; j < height; j++)
		{
			if (i + j < height - 1)
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}
}

