#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fpointer;
    fpointer = fopen("love.txt", "r");
    char singleLine[150];

    while(!feof(fpointer)){
        fgets(singleLine, 150, fpointer);
        puts(singleLine);
    }
    fclose(fpointer);

    return 0;
}
