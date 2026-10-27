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
		mas[i] = rand() % 201 - 100;
	}

	for (i = 0; i < 7; i++)
	{
		printf("%d is %s\n", mas[i], (mas[i] > 0) ? "positive" : (mas[i] < 0) ? "negative" : "zero");
	}

	return 0;
}
