//ABACHE, Adrian Jones M. (BSCS1A)//
//Multi-way selection problem 1//

#include <stdio.h>

int main(void)
{
//Local definitions//
	int age;

//Statements//
    printf("Please enter your age: ");
    scanf("%d", &age);

    switch(age)
    {
    case 0 ... 12:
    printf("\nYou are classified as Child.\n");
    break;
    case 13 ... 18:
    printf("\nYou are classified as Adolescence.\n");
    break;
    case 19 ... 59:
    printf("\nYou are classified as Adult.\n");
    break;
    case 60 ... 119:
    printf("\nYou are classified as Senior Adult.\n");
    break;

    default:
    printf("\nYou entered an invalid age or you entered an age that is higher than the oldest person alive.\n");
    break;

    return 0;
    }
}
