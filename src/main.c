#include <stdio.h>
#include <string.h>

#include "../include/utils.h"
#include "../include/quiz.h"
#include "../include/data.h"
#include "../include/admission.h"


int main(void) {
    const char *savefile = "students.txt";
    char line[128];
    int choice = 0;

    /* Fancy Welcome Screen */
    printf("========================================\n");
    printf("        WELCOME TO UPES ADMISSION       \n");
    printf("========================================\n");
    printf("   Your future begins here!\n");
    printf("   Thank you for choosing UPES.\n");
    printf("----------------------------------------\n");
    printf("   Let's start the admission process...\n");
    printf("   Loading...\n");
    printf("----------------------------------------\n\n");

    while (1) {
        printf("=== UPES MENU ===\n");
        printf("1. New Admission\n");
        printf("2. View Saved Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        safe_get(line, sizeof(line));
        if (sscanf(line, "%d", &choice) != 1) {
            printf("Invalid input.\n");
            continue;
        }

        switch (choice) {
            case 1:
                run_admission_flow_and_maybe_save(savefile);
                break;
            case 2:
                view_saved_records(savefile);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Choose 1-3.\n");
        }
    }

    return 0;
}

