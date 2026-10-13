// Вводити цілі числа допоки не буде введене 3 цифрове число і обчислити кількість введених чисел та суму числе які належать до інтервалу [-4;11]

#include <stdio.h>

int main() {

	int num, count, sum, hasInRange;

	count = 0, sum = 0, hasInRange = 0;

	printf("Enter number: ");
	scanf_s("%i", &num);

	while (!((num >= 100 && num <= 999) || (num <= -100 && num >= -999))) {
		count += 1;

		if (num >= -4 && num <= 11) {
			sum += num;
			hasInRange = 1;
		}

		printf("Enter number: ");
		scanf_s("%i", &num);
	}

	printf("Count: %d\n", count);
	if (hasInRange)
		printf("Sum: %d\n", sum);
	else
		printf("No numbers in the interval [-4;11] were entered.\n");

	return 0;
}