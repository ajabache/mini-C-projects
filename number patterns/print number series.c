#include<stdio.h>

int main()
{
    int i, limit;

    printf("Please enter the limit: ");
    scanf("%d", &limit);

    for (i = limit; i>= 1; i--)
        printf("\t %d \n", i);

    return 0;
}
