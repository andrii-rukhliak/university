// Обчислити суму усіх не парних 2-цифрових чисел

#include <stdio.h>

int main() {

	int i, sum; 
	i = 11, sum = 0;

	while (i < 100) {
		sum += i;
		i += 2;
	}

	printf("%d", sum);

	return 0;
}