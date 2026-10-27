#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int mas[7];
	int i;
	srand(time(NULL));

	// for (i = 0; i < 7; i++)
	// {
	// 	mas[i] = rand() % 100;
	// 	printf("%i ", mas[i]);
	// }

	for (i = 0; i < 7; i++)
	{
		mas[i] = 2 * i;
		printf("%i", mas);
	}
	return 0;
}