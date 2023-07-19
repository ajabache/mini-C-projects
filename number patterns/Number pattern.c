#include<stdio.h>

int main()
{
    int i, j, rows, columns;

    printf(" \nPlease Enter the Number of Rows : ");
    scanf("%d", &rows);

    printf(" \nPlease Enter the Number of Columns : ");
    scanf("%d", &columns);

    for(i = 1; i <= rows; i++)
    {
    	for(j = 1; j <= columns; j++)
		{
			printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
