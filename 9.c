// Write a program to find sum of 1 to N (sum of first N numbers) (with and without loop)

#include <stdio.h>

int main()
{
    int N, i, sum_with_loop = 0, sum_without_loop;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum_with_loop += i;
    }

    sum_without_loop = (N * (N + 1)) / 2;

    printf("Sum from 1 to %d using loop: %d\n", N, sum_with_loop);
    printf("Sum from 1 to %d without using loop (formula): %d\n", N, sum_without_loop);

    return 0;
}
