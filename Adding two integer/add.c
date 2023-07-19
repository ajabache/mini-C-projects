#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    int result;

    printf("Enter the num1: ");
    scanf("%d",&num1);

    printf("Enter the num2: ");
    scanf("%d",&num2);

    result = num1 + num2;

    printf("The sum of %d and %d is %d",num1,num2,result);

    getch();
}
