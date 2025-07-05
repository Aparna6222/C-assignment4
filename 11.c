// Write a program to print even numbers from 1 to 10 (or odd numbers)

#include <stdio.h>

int main()
{
    int choice;

    printf("Choose what to print:\n");
    printf("1. Even numbers\n");
    printf("2. Odd numbers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Even numbers from 1 to 10:\n");
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 == 0)
                printf("%d ", i);
        }
    }
    else if (choice == 2)
    {
        printf("Odd numbers from 1 to 10:\n");
        for (int i = 1; i <= 10; i++)
        {
            if (i % 2 != 0)
                printf("%d ", i);
        }
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
