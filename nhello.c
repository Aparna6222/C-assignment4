//Write a program to print hello N times

#include<stdio.h>
int main()
{
    int n;

    printf("Enter how many times to print Hello:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Hello\n");
    }
    return 0;
}