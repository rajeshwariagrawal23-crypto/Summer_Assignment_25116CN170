// program to create quiz application
#include <stdio.h>

int main(void) {
    int ans, score = 0;

    printf("\n'C' QUIZ MANIA\n");
    printf("Press Enter to begin....");
    getchar();
    printf("Welcome to the quiz. Let's start.\n");

    printf("\nQuestion 1:\n");
    printf("C language was developed by whom and when?\n");
    printf("1. Dennis Ritchie, 1972-73\n");
    printf("2. James Gosling, 1989\n");
    printf("3. Bjarne Stroustrup, 1995-96\n");
    printf("4. Guido van Rossum, 1830\n");
    printf("Choose an option: ");
    scanf("%d", &ans);
    if (ans == 1) {
        score++;
        printf("You're right!\n");
    } else {
        printf("You're wrong!\n");
    }

    printf("\nQuestion 2:\n");
    printf("Which loop structure in C is guaranteed to execute its code block at least once?\n");
    printf("1. For loop\n");
    printf("2. While loop\n");
    printf("3. If-else loop\n");
    printf("4. Do-while loop\n");
    printf("Choose an option: ");
    scanf("%d", &ans);
    if (ans == 4) {
        score++;
        printf("You're right!\n");
    } else {
        printf("You're wrong!\n");
    }

    printf("\nQuestion 3:\n");
    printf("Which header file must be included to use dynamic memory allocation functions like calloc() and malloc()?\n");
    printf("1. stdio.h\n");
    printf("2. conio.h\n");
    printf("3. stdlib.h\n");
    printf("4. string.h\n");
    printf("Choose an option: ");
    scanf("%d", &ans);
    if (ans == 3) {
        score++;
        printf("You're right!\n");
    } else {
        printf("You're wrong!\n");
    }

    printf("\nQuestion 4:\n");
    printf("What character is used to terminate a statement in C?\n");
    printf("1. [:]\n");
    printf("2. [. ]\n");
    printf("3. [;]\n");
    printf("4. [,]\n");
    printf("Choose an option: ");
    scanf("%d", &ans);
    if (ans == 3) {
        score++;
        printf("You're right!\n");
    } else {
        printf("You're wrong!\n");
    }

    printf("\nQuestion 5:\n");
    printf("Which keyword is used to prevent any changes to a variable within a C program?\n");
    printf("1. static\n");
    printf("2. volatile\n");
    printf("3. const\n");
    printf("4. immutable\n");
    printf("Choose an option: ");
    scanf("%d", &ans);
    if (ans == 3) {
        score++;
        printf("You're right!\n");
    } else {
        printf("You're wrong!\n");
    }

    printf("Yayy! You've completed the quiz.\n");
    printf("And your final quiz score is %d out of 5.\n", score);
    return 0;
}
