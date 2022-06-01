#include <stdio.h>

int main()
{
	/* prompt user for start size */
	int x;
	do
	{
		printf("Enter principal population: ");
		scanf("%d/n", &x);
	}
	while (x < 9);

	/* Prompt user for end size */
	int y;
	do
	{
		printf("Enter end population: ");
		scanf("%d/n", &y);
	}
	while (y < x);
	/* calculate no. of years until we reach threshold */
	int years = 0;

	while (x < y)
	{
		x = x + (x /3) - (x / 4);
		years++;
	}

	/* print number of years */
	printf("Estimated years to threshold: %i\n", years);
}
