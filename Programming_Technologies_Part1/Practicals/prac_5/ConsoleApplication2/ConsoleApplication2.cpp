#include <stdio.h>

// Задано масив, вивести на екрані спочатку всі невід’ємні елементи, а потім від’ємні

int main(void)
{
	float numbers[8] = { -4.0f, -3.5f, -2.0f, -1.98f, 0.0f, 1.25f, 4.75f, 5.0f };
	int index = 0;

	printf("Non-negative elements: ");
	for (index = 0; index < 8; index++)
	{
		if (numbers[index] >= 0)
		{
			printf("%.2f ", numbers[index]);
		}
	}

	printf("\nNegative elements: ");
	for (index = 0; index < 8; index++)
	{
		if (numbers[index] < 0)
		{
			printf("%.2f ", numbers[index]);
		}
	}

	return 0;
}