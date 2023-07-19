#include<stdio.h>

int main()
{
    int i, limit;

    printf("Enter a positive integer: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i += 1)
        printf("\n\t%2d\t&2d", i, i+1);

    return 0;
}
