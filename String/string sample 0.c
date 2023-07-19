#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){

    char string_1[9] = {'s', 't', 'r', 'i', 'n', 'g', ' ', '1', '\0'};
    char string_2[50] = "string 2";
    char string_3[9] = "string 3";
    char string_4[] = "string 4";

    printf("%s\n", string_1);
    printf("%s\n", string_2);
    printf("%s\n", string_3);
    printf("%s\n", string_4);
/*********************************************************************************************/

    char letter[5] = "ABCD";

    char a = letter[0]; // char index of 0 is A
    char b = letter[1]; // char index of 0 is B
    char c = letter[2]; // char index of 0 is C
    char d = letter[3]; // char index of 0 is D

    printf("%c %c %c %c\n", a, b, c, d);
    //same as
    printf("%c %c %c %c\n", letter[0], letter[1], letter[2], letter[3]);
/*********************************************************************************************/

    char word[20];

    printf("input word(s): ");
    scanf("%s", word);

    printf("inputed word is: %s\n", word);
/*********************************************************************************************/

    char ch[20] = "Father";

    ch[0] = 'M';
    ch[1] = 'o';

    printf("Advance happy %s's day!\n", ch);
/*********************************************************************************************/

    char len[50] = "programming is good";
    int length = strlen(len);
    printf("%s has a length of %d\n", len, length);
/*********************************************************************************************/

        char cpy1[20];
    strcpy(cpy1, "New Word");
    printf("Copied Text is in a no valued String is %s\n", cpy1);

    char cpy2[20] = "New Word";
    strcpy(cpy2, "Word New");
    printf("Copied Text is in a valued String is %s\n", cpy2);
/*********************************************************************************************/

    char cpy3[20];
    char cpy4[11] = "Extra Word";

    strcpy(cpy3, cpy4);
    printf("Copied Text is in a none valued String is %s\n", cpy3);
/*********************************************************************************************/

    char con1[] = "VICE CITY ";
    char con2[28] = "will be the place for GTA 6";
/*********************************************************************************************/
    return(0);
}
