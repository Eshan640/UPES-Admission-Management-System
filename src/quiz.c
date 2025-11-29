#include "quiz.h"
#include "utils.h"
#include <stdio.h>

int run_quiz_simple(QuizQ quiz[], int n) {
    int score = 0;
    for (int i = 0; i < n; ++i) {
        printf("\nQ%d) %s\n", i + 1, quiz[i].question);
        printf("A) %s\nB) %s\nC) %s\nD) %s\n",
               quiz[i].options[0], quiz[i].options[1],
               quiz[i].options[2], quiz[i].options[3]);
        char ans = ask_choice_simple("ABCD");
        if (ans == quiz[i].correct) score++;
    }
    return score;
}
