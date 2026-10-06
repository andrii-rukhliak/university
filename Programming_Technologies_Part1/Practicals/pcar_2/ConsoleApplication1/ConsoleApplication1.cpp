// Умова: програма вгадування випадквого числа від 1 до 10 з підказками

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, user_number;

    number = 1 + rand() % 10;

    do {
        printf("Guess a number from 1 to 10:\n ");
        scanf_s("%d", &user_number);

        if (number == user_number)
            printf("You guessed it!\n");

        else {
            printf("Wrong number. Try again.\n");

            if (number < user_number)
                printf("Number is lower\n");

            else
                printf("Number is greater\n");
                
        }

    } while (user_number != number);

    return 0;
}