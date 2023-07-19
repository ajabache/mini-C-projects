#include <stdio.h>

void printOne(int x);

int main(void)
{
    int a;

    a = 5;

    printOne (a);

    a = 33;

    printOne (a);

    return 0;
}
void printOne (int x)
{
    printf("%d\n", x);
    return;
}
