#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer;
    fpointer = fopen("lyka.txt", "w");

    fprintf(fpointer,"I Love You\n");

    fclose(fpointer);

    return 0;
}
