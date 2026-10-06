#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number is: %d\n", reversedNumber);

    return 0;
}