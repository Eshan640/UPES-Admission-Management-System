#include "../include/utils.h"
#include "../include/quiz.h"
#include "../include/data.h"
#include "../include/admission.h"
#include <stdio.h>
#include <string.h>

void save_record_to_file(const char *filename,
                         const char *name,
                         const char *mobile,
                         const char *school,
                         const char *course)
{
    FILE *fp = fopen(filename, "a");
    if (!fp) {
        printf("Error: cannot open file.\n");
        return;
    }
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Mobile: %s\n", mobile);
    fprintf(fp, "School: %s\n", school);
    fprintf(fp, "Course: %s\n", course);
    fprintf(fp, "-----------------------------\n");
    fclose(fp);
}

void view_saved_records(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("\nNo saved records found.\n");
        return;
    }
    char line[256];
    printf("\n--- Saved Student Records ---\n\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    printf("\n--- End of Records ---\n");
    fclose(fp);
}

int run_admission_flow_and_maybe_save(const char *savefile) {
    char name[100], father[100], mother[100], address[200], mobile[32], line[128];
    float m10 = 0.0f, m12 = 0.0f;

    printf("\n--- New Admission ---\n");

    printf("Name: ");
    safe_get(name, sizeof(name));

    printf("Father's Name: ");
    safe_get(father, sizeof(father));

    printf("Mother's Name: ");
    safe_get(mother, sizeof(mother));

    printf("Address: ");
    safe_get(address, sizeof(address));

    while (1) {
        printf("Mobile (10 digits): ");
        safe_get(mobile, sizeof(mobile));
        if (valid_mobile(mobile)) break;
        printf("Invalid mobile. Try again.\n");
    }

    while (1) {
        printf("10th Marks (percent): ");
        safe_get(line, sizeof(line));
        if (sscanf(line, "%f", &m10) == 1) break;
        printf("Enter a number like 75.5\n");
    }
    while (1) {
        printf("12th Marks (percent): ");
        safe_get(line, sizeof(line));
        if (sscanf(line, "%f", &m12) == 1) break;
        printf("Enter a number like 80.0\n");
    }

    if (m10 < 70.0f || m12 < 70.0f) {
        printf("\nNot eligible. Minimum 70%% required.\n");
        return 0;
    }

    printf("\nYou are eligible!\n");

    printf("\nChoose School:\n1) Business\n2) Law\n3) Computer Science\n");
    int s = 0;
    while (1) {
        printf("Enter (1-3): ");
        safe_get(line, sizeof(line));
        if (sscanf(line, "%d", &s) == 1 && s >= 1 && s <= 3) break;
        printf("Invalid selection.\n");
    }

    School chosen = schools[s - 1];

    printf("\nAvailable courses in %s:\n", chosen.name);
    int i;
    char valid[12];

    for (i = 0; i < chosen.course_count; ++i) {
        printf("%c) %s\n", 'A' + i, chosen.courses[i]);
        valid[i] = 'A' + i;
    }
    valid[i] = '\0';

    char course_choice = ask_choice_simple(valid);
    char selected_course[60];
    strcpy(selected_course, chosen.courses[course_choice - 'A']);

    printf("\n--- Your Details Summary ---\n");
    printf("Name: %s\nCourse: %s\n10th Marks: %.2f\n12th Marks: %.2f\n",
           name, selected_course, m10, m12);
    printf("-----------------------------\n");

    printf("\nStarting quiz for %s (%s)\n", chosen.name, selected_course);

    int score = run_quiz_simple(chosen.quiz, chosen.quiz_count);

    printf("\nYou scored %d out of %d\n", score, chosen.quiz_count);

    if (score < 8) {
        printf("\nSorry, you did not pass the quiz.\n");
        return 0;
    }

    printf("\nCongratulations! You passed the quiz.\n");

    save_record_to_file(savefile, name, mobile, chosen.name, selected_course);

    printf("\n--- Admission Letter ---\n");
    printf("Name: %s\nMobile: %s\nSchool: %s\nCourse: %s\n",
           name, mobile, chosen.name, selected_course);

    printf("\n----------------------------------------\n");
    printf(" Thank you for coming to UPES.\n");
    printf(" We are excited to welcome you on campus soon!\n");
    printf(" Wishing you success and a bright journey ahead.\n");
    printf("----------------------------------------\n");

    return 1;
}
