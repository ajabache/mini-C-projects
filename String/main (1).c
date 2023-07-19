#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {


    /**                         WHAT IS STRING                      */

    /*****************************************************************
     *                                                               *
     * STRINGS o sa madaling sabi - words                            *
     * but in any programming language String will be always be a    *
     * sequence of Characters or can be called as arrays of          *
     * characters. (technical definition, tama? )                    *
     *                       ***pero WORDS lang po siya              *
     *                                                               *
     * same rules with an array                                      *
     *                                                               *
     * In C it will be always terminated with a null character \0    *
     *                                                               *
     * When the compiler encounters a sequence of characters         *
     * enclosed in a double quote marks (" "), it automatically      *
     * appends a null character \0 at the end by default.            *
     * Pero pag tig print ang String natin, dinaman lalabas ang      *
     * null terminator na \0                                         *
     *                                                               *
     ****************************************************************/

    // 1st Valid Declaration - Essential ang pag lagay ng \0 pag gantong style ang ginamit na pag declare - since this has a fixed size
    char string_1[9] = {'s', 't', 'r', 'i', 'n', 'g', ' ', '1', '\0'};

    // 2nd Valid Declaration - no need to put the null terminator in this style because it will be automatically added
    char string_2[50] = "string 2";

    // 3nd Valid Declaration - may pasobra isa para sa \0
    char string_3[9] = "string 3";

    /* 4th Valid Declaration - Pero diman suggested gamitin ayon sa modyul na sinasabi na [Takes up an extra cell for ‘\0’]
     *
     * eto sakin lang explanation ko -> kasi same concept siya sa int array na no need mag declare ng size kung ilalagay
     * lang naman ang value na kailangan kasi automatic na ang size ang naga adjust kung baga kung ilan ang nilagay
     * mo edi yun din ang size ng array mo. pero sa case ng String may pasobra dapat talaga (extra memory cell kung baga)
     * para sa \0 (null index). Overall pedi naman to gamitin,
     * pero iwas lang baka pagalitan tayo ni ma'am.
     *
     */
    char string_4[] = "string 4";

    /*****************************************************************
     *                                                               *
     * important note:                                               *
     *         1. do not use %c as String formatter, pedi mag        *
     *         return ito ng random na di maipaliwanag nag           *
     *         character                                             *
     *         2. no need to use for loop to access all the indexes  *
     *            advantage na to keysa sa int na array              *
     *                                                               *
     ****************************************************************/

    printf("%s\n", string_1);
    printf("%s\n", string_2);
    printf("%s\n", string_3);
    printf("%s\n", string_4);

    /*****************************************************************
     *                                                               *
     * Let bracket represent as a square at kunware nag declare      *
     * tayo ng String na: char string[7] = "string";                 *                                                            *
     *                                                               *
     * Visualize String in Memory Diagram                            *
     *                                                               *
     *        [s][t][r][i][n][g][\0]                                 *
     * index:  0  1  2  3  4  5   6                                  *
     *                                                               *
     * As you can see our String will be automatically appended      *
     * by a null character \0                                        *
     * Just imagine inside our computer that every string has \0     *
     * at the end.                                                   *
     *                                                               *
     ****************************************************************/


    // bonus: manual initialization of characters of a string to a char
    char letter[5] = "ABCD";

    char a = letter[0]; // char index of 0 is A
    char b = letter[1]; // char index of 0 is B
    char c = letter[2]; // char index of 0 is C
    char d = letter[3]; // char index of 0 is D

    printf("%c %c %c %c\n", a, b, c, d);
    //same as
    printf("%c %c %c %c\n", letter[0], letter[1], letter[2], letter[3]);

    /*****************************************************************
     ***            Examples of an Invalid Declaration             ***
     *                                                               *
     * eto pwedi naman                                               *
     *   char string_4[] = {'s', 't', 'r', 'i', 'n', 'g', ' ', '3'}; *
     *                                                               *
     * wag lang to                                                   *
     *   char c[100];                                                *
     *   c = "Error! kasi diman assignable ang String sa C";         *
     *                                                               *
     * eto bawal din                                                 *
     *   char c[7] = "string\0"; kasi may memory cell na para kay \0 *
     *                         no need na mag lagay ng \0            *
     *                                                               *
     *                                                               *
     * at mas lalo na  eto                                           *
     *   char c[6] = "string"; remember that this declaration has a  *
     *                         fixed size na 6 at na initialize      *
     *                         na sakto, san nalang ilalagay ung /0? *                                          *
     *                                                               *
     ****************************************************************/












    /**                       INPUT/OUTPUT A STRING                 */

    /****************************************************************
     *                                                              *
     * Just like any data types you can Input a String in C.        *
     * gamitin na natin ang declaration na:                         *
     *                                                              *
     * char word[20];                                               *
     *                                                              *
     * sa WORD na variable nayan - fixed ang size which is 20       *
     *                                                              *
     * remember that okey lang na kulang ang pag input na String    *
     * kasi nasa 20 naman ang size, wag lang sobra (masurupay       *
     * so sinapna - ang apod sa bikol kung baga)                    *
     *                                                              *
     ****************************************************************/

    // declaration
    char word[20];

    // promting
    printf("input word(s): ");
    scanf("%s", word); // kahit walang '&' okey lang din, kung meron okey na ok din - connected to sa pointers na lesson

    // printing
    printf("inputed word is: %s\n", word);










    /**           REPLACING A NEW CHARACTER IN A STRING             */

    // we will just simple replace a character in our string

    // first declare
    char ch[20] = "Father";

    // second replace a character in our String
    ch[0] = 'M';
    ch[1] = 'o';

    // print to see results
    printf("Advance happy %s's day!\n", ch);


    /**               bUILT IN FUNCTIONS FOR STRINGS IN C          */

    /****************************************************************
     *                                                              *
     * requirement ang i include ang 'string.h' para magamit ang    *
     *             mga functions na ito. makikita ito sa taas       *
     *             ng program.                                      *
     *                                                              *
     * strlen() -> calculates the length of string                  *
     * strcpy() -> copies a string to another string                *
     * strcat() -> concatenates (joins) two strings                 *
     * strcmp() -> compares two string                              *
     * strlwr() -> converts string to lowercase                     *
     * strupr() -> converts string to uppercase                     *
     * strrev() -> reverse a string                                 *
     *                                                              *
     ****************************************************************/

    // calculates the length of string - for usage ng function -> naga return to ng int (sabay ang space sa bilang)
    char len[50] = "programming is good";
    int length = strlen(len);
    printf("%s has a length of %d\n", len, length);

    /*
     * copies a string to another string - takes two parameter
     * strcpy(dito ilalagay ung lagayan ng string, kung ano ung ilalagay mo sa paglalagyan);
     */

    char cpy1[20];
    strcpy(cpy1, "New Word");
    printf("Copied Text is in a no valued String is %s\n", cpy1);

    char cpy2[20] = "New Word";
    strcpy(cpy2, "Word New");
    printf("Copied Text is in a valued String is %s\n", cpy2);

    // another example
    char cpy3[20];
    char cpy4[11] = "Extra Word";

    strcpy(cpy3, cpy4);
    printf("Copied Text is in a none valued String is %s\n", cpy3);


    /*
     * concatenates (joins) two strings
     * strcat unlike sa strcpy dito pinagsasama ang dalawang string ng di naapektuhan ang original string ng kada isa
     */

    char con1[] = "VICE CITY ";
    char con2[28] = "will be the place for GTA 6";

    // first parameter will be the one to become the container of the two concatenated strings
    strcat(con1, con2);
    printf("%s\n", con1);

    // para maiba
    strcpy(con2, "");
    strcat(con2, "Red ");
    strcat(con2, "Dead ");
    strcat(con2, "Redemption ");
    strcat(con2, "2");

    printf("Best Game Rockstar has Made is %s\n", con2);

    // converts string to lowercase
    char uppercase[10] = "UPPERCASE";
    printf("String to Lower is %s\n", strlwr(uppercase));

    // converts string to uppercase
    char lowercase[10] = "lowercase";
    printf("String to Lower is %s\n", strupr(lowercase));

    // reverse a string - uncomment nalang ung pag print
    char reverse[10] = "ihgfedcba";
    //    printf("String Reversed is %s\n", strrev(reverse));


    // comparing two string kung sino nauna, alphabetically
    char compare_1[5] = "abcd";
    char compare_2[5] = "zyxw";

    // first parameter will be the reference if siya ba ay alphabetically nauna kay second parameter
    // etong strcmp will return (negative value) if compare_1's 1st character is  alphabetically na nauna sa compare_2 na characters
    // compare_1 < compare_2 returns (negative) since nauna ang 'a' sa 'z' na character
    // pagkatapos ay kunkunin ung returned value at i cocompare sa 0 - tandaan ang strcmp di naga return ng boolean
    // if this statement is true the print abcd < zyxw
    if (strcmp(compare_1, compare_2) < 0) {
        printf("%s %s\n", compare_1, compare_2);
    } else {
        printf("%s %s\n", compare_2, compare_1);
    }

    // comparing ulit, pero nauna si z ->
    // 'z' is in the alphabetical position na 27 so minus position ni 'a' na 1 equivalent siya sa 26
    // so 27 < 0 is false then print abcd > zyxw
    if (strcmp(compare_2, compare_1) < 0) {
        printf("%s %s\n", compare_1, compare_2);
    } else {
        printf("%s %s\n", compare_2, compare_1);
    }


    // to be continued

    return (EXIT_SUCCESS);
}
// - prepared for BSCS 1-A
