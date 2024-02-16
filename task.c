#include <stdio.h>
main()
{

    // Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a

    int n1, n2, n3;

    printf("Enter the Number 1:");
    scanf("%d", &n1);

    printf("Enter the Number 2:");
    scanf("%d", &n2);

    printf("Enter the Number 3:");
    scanf("%d", &n3);

    printf("The Number 1 is: %d\n", n1);
    printf("The Number 2 is: %d\n", n2);
    printf("The Number 3 is: %d\n", n3);

    if (n1 < n2)
    {
        if (n1 < n3)
        {
            printf("The Number 1 is Minimum: %d", n1);
        }
        else
        {
            printf("The Number 3 is Minimum: %d", n3);
        }
    }
    else
    {
        if (n2 < n3)
        {
            printf("The Number 2 is Minimum: %d", n2);
        }
        else
        {
            printf("The Number 3 is Minimum: %d", n3);
        }
    }

    // Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.

    int no1, no2, no3, no4;

    printf("\n\nEnter the Number 1:");
    scanf("%d", &no1);

    printf("Enter the Number 2:");
    scanf("%d", &no2);

    printf("Enter the Number 3:");
    scanf("%d", &no3);

    printf("Enter the Number 4:");
    scanf("%d", &no4);

    printf("The Number 1 is: %d\n", no1);
    printf("The Number 2 is: %d\n", no2);
    printf("The Number 3 is: %d\n", no3);
    printf("The Number 4 is: %d\n", no4);

    if (n1 > no2)
    {
        if (n1 > no3)
        {
            if (no1 > no4)
            {
                printf("--->Number 1:%d is Maximum", no1);
            }
            else
            {
                printf("--->Number 4:%d is Maximum", no4);
            }
        }
        else
        {
            printf("--->Number 3:%d is Maximum", no3);
        }
    }
    else
    {
        if (n2 > no3)
        {
            if (no2 > no4)
            {
                printf("--->Number 2:%d is Maximum", no2);
            }
            else
            {
                printf("--->Number 4:%d is Maximum", no4);
            }
        }
        else
        {
            if (no3 > no4)
            {
                printf("--->Number 3:%d is Maximum", no3);
            }
            else
            {
                printf("--->Number 4:%d is Maximum", no4);
            }
        }
    }
}