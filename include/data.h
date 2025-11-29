#ifndef DATA_H
#define DATA_H

#include "quiz.h"

typedef struct {
    char name[60];
    char courses[10][50];
    int course_count;
    QuizQ *quiz;
    int quiz_count;
} School;

/* Extern declarations for quiz arrays and schools array */
extern QuizQ business_q[10];
extern QuizQ law_q[10];
extern QuizQ cs_q[10];
extern School schools[3];

#endif /* DATA_H */
