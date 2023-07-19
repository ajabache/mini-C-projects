#include <stdio.h>

int multiply(int num1, int num2);

int main (void)
{
    int multiplier;
    int multiplicand;
    int product;

    printf("Enter two integers: ");
    scanf("%d %d", &multiplier, & multiplicand);

    product = multiply(multiplier, multiplicand);

    printf("Product of %d and %d is %d\n", multiplier, multiplicand, product);

    return 0;
}
int multiply (int num1, int num2)
{
    return (num1*num2);
}
