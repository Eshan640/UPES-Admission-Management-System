#ifndef QUIZ_H
#define QUIZ_H

typedef struct {
    char question[200];
    char options[4][150];
    char correct;
} QuizQ;

int run_quiz_simple(QuizQ quiz[], int n);

#endif /* QUIZ_H */
