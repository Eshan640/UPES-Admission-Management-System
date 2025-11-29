#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

void safe_get(char *buf, int size);
int valid_mobile(const char *s);
char ask_choice_simple(const char *valid);

#endif /* UTILS_H */
