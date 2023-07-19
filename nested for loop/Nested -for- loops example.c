#include<stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        printf("Row %d: ",i);
        for (j = 1; j <= 4; j++)
            printf("%3d", j);
        printf("\n");

    }
    return 0;
}
