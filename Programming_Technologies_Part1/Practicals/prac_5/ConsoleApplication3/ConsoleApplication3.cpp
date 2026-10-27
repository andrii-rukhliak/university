#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int mas[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		mas[i] = rand() % 100;
	}

	printf("Original order: ");
	for (i = 0; i < 7; i++)
	{
		printf("%i ", mas[i]);
	}

	printf("\nReversed order: ");
	for (i = 6; i >= 0; i--)
	{
		printf("%i ", mas[i]);
	}

	return 0;
}
