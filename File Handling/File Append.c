#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer;
    fpointer = fopen("lyka.txt", "a");

    fprintf(fpointer,"\nby Adrian Jones");

    fclose(fpointer);

    return 0;
}
