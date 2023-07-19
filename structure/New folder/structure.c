/*
 * Student Name : Joemar Cardiño
 * Course-Block : BSCS 1-A
 *
 * Title: LABORATORY EXERCISE 7
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

// my global variables
int i, j;

// user-defined data-type
typedef struct {
    char *student_name;
    int student_number, student_age;
    char student_gender;
} Students, Swap;

// function prototype


int main(int argc, char** argv) {

    // File Pointer read/write
    FILE *inputPtr = fopen("students.txt", "r");
    FILE *outputPtr = fopen("organized.txt", "w");

    // IF file failed to read - then END
    if (!inputPtr) exit(EXIT_FAILURE);

    int n; // variable for N (number) of students
    fscanf(inputPtr, "%d", &n);

    // declaring the Student array
    Students std_list[n];

    // temporary holder of the values from the File
    char name[n][12], gender;
    int snumber, age;

    for (i = 0; !feof(inputPtr); i++) {
        fscanf(inputPtr, "%s %d %d %c", name[i], &snumber, &age, &gender);

        std_list[i].student_name = name[i];
        std_list[i].student_number = snumber;
        std_list[i].student_age = age;
        std_list[i].student_gender = gender;

    }

    // sort function
    sort_std_list(std_list, n);

    // display and writing to file
    puts("NAME\t  #  AGE");
    fputs("NAME\t  #  AGE\n", outputPtr);
    puts("----------------");
    fputs("----------------\n", outputPtr);
    puts("MALE:");
    fputs("MALE:\n", outputPtr);

    for (i = 0, j = 0; i < n; i++) {
        gender = std_list[i].student_gender;

        if (gender == 'M' || gender == 'm') {
            printf("%-8s ", std_list[i].student_name);
            printf("%1s%02d", "", std_list[i].student_number);
            printf("%4d\n", std_list[i].student_age);

            fprintf(outputPtr, "%-8s ", std_list[i].student_name);
            fprintf(outputPtr, "%1s%02d", "", std_list[i].student_number);
            fprintf(outputPtr, "%4d\n", std_list[i].student_age);
            j++;
        }

        if (gender == 'F' || gender == 'f') {
            // this only print "Female" only once
            printf((i == j) ? "\nFEMALE:" : "");
            fputs((i == j) ? "\nFEMALE:" : "", outputPtr);

            printf("\n%-8s ", std_list[i].student_name);
            printf("%1s%02d", "", std_list[i].student_number);
            printf("%4d", std_list[i].student_age);

            fprintf(outputPtr, "\n%-8s ", std_list[i].student_name);
            fprintf(outputPtr, "%1s%02d", "", std_list[i].student_number);
            fprintf(outputPtr, "%4d", std_list[i].student_age);
        }

    }

    // closing File
    fclose(inputPtr);
    fclose(outputPtr);

    return (EXIT_SUCCESS);
}

