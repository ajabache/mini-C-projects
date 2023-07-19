
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, h, Area;
    printf("Base: ");
    scanf("%d", &b);
    printf("Height: ");
    scanf("%d", &h);

    Area = (b*h)/2;

    printf("Area=%d\n", Area);

    return 0;
}
