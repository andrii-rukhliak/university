#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Генерувати випадкове число доки воно не буде меншим за попереднє, порахувати середнє арифметичне

int main() {
	int sum, count, num, prev_num;
	float avg;

	sum = 0;
	count = 0;
	avg = 0;
	srand(time(NULL));
	num = -5 + rand() % 21;

	do {
		printf("%d ", num);
		sum += num;
		count++;
		prev_num = num;
		num = -5 + rand() % 21;

	} while (prev_num < num);

	avg = (float)sum / count;

	printf("\nAverage: %.2f\n", avg);

	return 0;
}