#include "../include/utils.h"
#include "../include/quiz.h"
#include "../include/data.h"
#include "../include/admission.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void safe_get(char *buf, int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0';
        return;
    }
    buf[strcspn(buf, "\n")] = '\0';
}

int valid_mobile(const char *s) {
    int len = (int)strlen(s);
    if (len != 10) return 0;
    for (int i = 0; i < 10; ++i) if (!isdigit((unsigned char)s[i])) return 0;
    return 1;
}

char ask_choice_simple(const char *valid) {
    char line[64];
    int attempts = 0;
    while (1) {
        printf("Enter choice (%s): ", valid);
        fflush(stdout);  // Force output
        
        if (fgets(line, sizeof(line), stdin) == NULL) {
            // EOF reached or error
            if (attempts++ > 100) {
                fprintf(stderr, "\nError: Too many invalid inputs\n");
                exit(1);
            }
            continue;
        }
        
        // Remove newline
        line[strcspn(line, "\n")] = '\0';
        
        if (line[0] == '\0') {
            printf("Please enter a choice.\n");
            if (attempts++ > 100) {
                fprintf(stderr, "\nError: No valid input received\n");
                exit(1);
            }
            continue;
        }
        
        char c = toupper((unsigned char)line[0]);
        if (strchr(valid, c)) return c;
        printf("Invalid choice. Try again.\n");
    }
}


