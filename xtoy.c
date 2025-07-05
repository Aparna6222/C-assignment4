 //Write a program to print x to y (both inclusive) 

 #include<stdio.h>
 int main()
 {
    int x,y;

    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("Number from %d to %d are:\n",&x,&y);
    for(int i=x; i<=y; i++)
    {
        printf("%d\n",i);

    }
    return 0;


 }