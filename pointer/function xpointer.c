#include <stdio.h>

int cubeByValue(int n);

int main(void)
{
    int number;

    printf("Input the original number: ", number);
    scanf("%d", &number);

    number = cubeByValue(number);
    printf("\nThe new value of number is %d\n", number);

    return 0;
}
int cubeByValue(int n)
{
    return n*n*n;
}
