// Write a program to find sum of 1 to 5 (sum of first 5 numbers)

int main()
{
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    printf("The sum of numbers from 1 to 5 is: %d\n", sum);

    return 0;
}
