#include <stdio.h>

int main(void)
{
    int first, last;
    int sum = 0;

    printf("Enter first number: ");
    scanf_s("%d", &first);

    printf("Enter last number: ");
    scanf_s("%d", &last);

    int swap = (first > last);
    int start = first + (last - first) * swap;
    int end = last + (first - last) * swap;

    for (int i = start; i <= end; ++i)
    {
        sum += (1 - 2 * (i % 2)) * i * i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}