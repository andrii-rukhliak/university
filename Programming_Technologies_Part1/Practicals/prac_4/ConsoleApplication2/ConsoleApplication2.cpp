#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Роздрукувати числа певного діапазону і їхні квадрати

int main() {
	int lower_bound, upper_bound, pow, count;

	printf("Enter lower bound: ");
	scanf_s("%d", &lower_bound);

	printf("Enter upper bound: ");
	scanf_s("%d", &upper_bound);

	for (lower_bound <= upper_bound) {
		pow = lower_bound * lower_bound;
		printf("Number = %d, its square = %d\n", lower_bound, pow);

		
		lower_bound++;
	}
	
	return 0;
}