#include <stdio.h>

int main() {

	int t;

	printf("Enter time in minutes: ");

	if (scanf_s("%d", &t) != 1) {
		printf("Invalid input. Enter an integer from 0 to 59.\n");
		return 1;
	}

	if (t >= 0 && t <= 59) {

		if (t % 5 <= 2)
			printf("Green\n");

		else
			printf("Red\n");

	}

	else
		printf("Enter a time from 0 to 59 minutes.\n");
	
	return 0;

}