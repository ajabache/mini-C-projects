#include <stdio.h>
#include <stdlib.h>
#include <string.h> // to get strcpy() and strlen()

int main(int argc, char** argv) {

    FILE *students_grade_file = fopen("activity1.in", "r"); // contains a list of float (grade)
    FILE *output_file = fopen("activity1.out", "w"); // will contain the processed data

    if (!students_grade_file || !output_file) {
        // note: equivalent to saying if (students_grade_file == NULL OR output_file == NULL)
        printf("Error! Could not open file\n");
        exit(-1);
    }

    // my required variables
    float read_quizzes_grade; // weight_for_quizzes = .25;
    float read_midterm_exam_grade; // weight_for_midterm_exam = .20;
    float read_final_exam_grade; // weight_for_final_exam = .25;
    float read_project_grade; // weight_for_project = .20;
    float read_recitation_grade; // weight_recitation = .10;
    float total_grade = 0, grade_point;
    char description[18];

    // get the token one by one and store to their designated variable
    fscanf(students_grade_file, "%f", &read_quizzes_grade);
    fscanf(students_grade_file, "%f", &read_midterm_exam_grade);
    fscanf(students_grade_file, "%f", &read_final_exam_grade);
    fscanf(students_grade_file, "%f", &read_project_grade);
    fscanf(students_grade_file, "%f", &read_recitation_grade);

    total_grade = (.25 * read_quizzes_grade + .20 * read_midterm_exam_grade + .25 * read_final_exam_grade + .20 * read_project_grade + .10 * read_recitation_grade) /*(.25 + .20 + .25 + .20 + .10)*/;
    // alternate - causes an invalid output to the required output in the activity: grade_point = (105/*3*/ - total_grade) * .10;

    if (total_grade >= 96 && total_grade <= 100) {
        grade_point = 1.00;
        strcpy(description, "Outstanding");
    } else if (total_grade >= 91 && total_grade <= 95.99) {
        grade_point = 1.25;
        strcpy(description, "Superior");
    } else if (total_grade >= 87 && total_grade <= 90.99) {
        grade_point = 1.50;
        strcpy(description, "Very Satisfactory");
    } else if (total_grade >= 83 && total_grade <= 86.99) {
        grade_point = 1.75;
        strcpy(description, "Very Satisfactory");
    } else if (total_grade >= 79 && total_grade <= 82.99) {
        grade_point = 2.00;
        strcpy(description, "Satisfactory");
    } else if (total_grade >= 75 && total_grade <= 78.99) {
        grade_point = 2.25;
        strcpy(description, "Satisfactory");
    } else if (total_grade >= 71 && total_grade <= 74.99) {
        grade_point = 2.50;
        strcpy(description, "Fair");
    } else if (total_grade >= 65 && total_grade <= 70.99) {
        grade_point = 2.75;
        strcpy(description, "Fair");
    } else if (total_grade >= 60 && total_grade <= 64.99) {
        grade_point = 3.00;
        strcpy(description, "Fair");
    } else if (total_grade < 60) {
        grade_point = 5.00;
        strcpy(description, "Fair");
    } else {
        printf("invalid grade point!");
        // what if the user intention is to troll, example his/her grade is greater than 100
    }
    /*
     * notes for the used if-else-if
     * 1. If the string specified by the second argument (in strcpy() - function)
     *    is larger than the character array specified by the first argument, the
     *    string will overflow the array, corrupting memory or causing a
     *    runtime error.
     * 2. In my if-else-if statement i have to assign/initialize a string
     *    value to description to be printed on the last part of our program
     *    by the help of the function strcpy - para isahan nalang ang pag print sa baba
     */

    // the actual writing (statements) for the file (activity.out)
    fputs("------------------------------------------------------\n", output_file);
    fputs("REQUIREMENT             GRADE                   WEIGHT\n", output_file);
    fputs("------------------------------------------------------\n", output_file);
    fprintf(output_file, "Quizzes                 %.2f                   25%%\n", read_quizzes_grade);
    fprintf(output_file, "Midterm Exam            %.2f                   20%%   \n", read_midterm_exam_grade);
    fprintf(output_file, "Final Exam              %.2f                   25%%   \n", read_final_exam_grade);
    fprintf(output_file, "Project                 %.2f                   20%%   \n", read_project_grade);
    fprintf(output_file, "Recitation              %.2f                   10%% \n\n", read_recitation_grade);
    fprintf(output_file, "Total Grade: %.2f\n", total_grade);
    fprintf(output_file, "Grade Point: %.2f\n", grade_point);
    fprintf(output_file, "Description: %s\n", description);

    /*
     * notes for fputs() and fprintf() function
     * 1. fprintf() does formatted output. That is, it reads and interprets a format string that you
     *           supply and writes to the output stream the results. - need ilagay ung file pointer, format specifier, then address of the value
     * 2. fputs() simply writes the string you supply it to the indicated output stream.
     */

    // closing the C programming file pointer
    fclose(students_grade_file);
    fclose(output_file);

    // display the output file in activity.out file
    // can add commented for us to not execute this statements below or uncomment to display the output file
    FILE *display = fopen("activity1.out", "r"); // override the variable
    char c = fgetc(display);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(display);
    }

    // closing the C programming file pointer
    fclose(display);

    return (EXIT_SUCCESS);
}
