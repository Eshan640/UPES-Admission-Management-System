#include "utils.h"
#include <string.h>
#include <ctype.h>

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
    while (1) {
        printf("Enter choice (%s): ", valid);
        safe_get(line, sizeof(line));
        if (line[0] == '\0') {
            printf("Please enter a choice.\n");
            continue;
        }
        char c = (char)toupper((unsigned char)line[0]);
        if (strchr(valid, c)) return c;
        printf("Invalid choice. Try again.\n");
    }
}
