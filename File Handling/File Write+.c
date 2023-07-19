#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer;
    fpointer = fopen("Jones.txt", "w+");
    fprintf(fpointer,"I Love You\n");

    fseek(fpointer, 10, SEEK_SET);
    fputs(" Lyka", fpointer);

    fseek(fpointer, 1, SEEK_END);
    fputs("Valladolid", fpointer);

    fclose(fpointer);

    return 0;
}
