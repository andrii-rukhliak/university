// Умова: перевести оцінку по 100-бальній системі до 5-бальної за алгоритомом: оцінка < 50 - 2, від 50 до 70 - 3, від 71 до 87 - 4, від 88 - 5

#include <stdio.h>

int main() {

	int mark_100;

	do {
		printf("Enter your mark (0-100): ");
		scanf_s("%d", &mark_100);

		if (mark_100 < 0 || mark_100 > 100)
			printf("Error: mark must be between 0 and 100.\n");

	} while (mark_100 < 0 || mark_100 > 100);
	

	if (mark_100 < 50)
		printf("Your mark in 5-point system = 2");

	else if (mark_100 >= 50 && mark_100 <=70)
		printf("Your mark in 5-point system = 3");

	else if (mark_100 >= 71 && mark_100 <= 87)
		printf("Your mark in 5-point system = 4");

	else if (mark_100 >= 88)
		printf("Your mark in 5-point system = 5");


	return 0;

}