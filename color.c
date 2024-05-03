// Subject : Algorithms & Data Structures
// Project : Simon Says
// File    : Executable < .c >
// Name    : Color.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include "color.h"

// Define a void function to start a Neutral State
void restart() {
    simon();
    says();
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 7);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 6);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 5);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 4);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 3);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 2);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2));
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 1);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 2);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 3);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 5);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    printf("\n\n");
    sleep(1);
}

// Define a void function to start the Bright_Green
void green() {
    restart();
    simon();
    says();
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 7);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 6);
    printf("%c" BRIGHT_GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 5);
    printf("%c" BRIGHT_GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 4);
    printf("%c" BRIGHT_GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 3);
    printf("%c" BRIGHT_GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 2);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2));
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 1);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 2);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 3);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 5);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    printf("\n\n");
    sleep(1);
}

// Define a void function to start the Bright_Red
void red() {
    restart();
    simon();
    says();
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 7);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 6);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 5);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 4);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 3);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 2);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2));
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 1);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 2);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 3);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 5);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    printf("\n\n");
    sleep(1);
}

// Define a void function to start the Bright_Yellow
void yellow() {
    restart();
    simon();
    says();
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 7);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 6);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 5);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 4);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 3);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 2);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2));
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 1);
    printf("%c" BRIGHT_YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 2);
    printf("%c" BRIGHT_YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 3);
    printf("%c" BRIGHT_YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    printf("%c" BRIGHT_YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 5);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    printf("\n\n");
    sleep(1);
}

// Define a void function to start the Bright_Blue
void blue() {
    restart();
    simon();
    says();
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 7);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 6);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 5);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 4);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 3);
    printf("%c" GREEN "  %c%c%c%c%c%c%c%c%c  " RESET "%c" RED "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 2);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2));
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 1);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 2);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 3);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    printf("%c" YELLOW "  %c%c%c%c%c%c%c%c%c  " RESET "%c" BRIGHT_BLUE "  %c%c%c%c%c%c%c%c%c  " RESET "%c", 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 219, 219, 219, 219, 219, 219, 219, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 5);
    printf("%c             %c             %c", 186, 186, 186);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);
    printf("\n\n");
    sleep(1);
}

void loading() {
    system("cls");
    gotoxy((Cols_Size / 2) - (16 / 2), (Rows_Size / 2) - 1);
    printf("L o a d i n g . . .");
    gotoxy((Cols_Size / 2) - (45 / 2), Rows_Size / 2);
    printf("%c%c", 201, 205);
    for (int upper = 0; upper < 43; upper++) {
        printf("%c", 205);
    }
    printf("%c%c", 205, 187);
    gotoxy((Cols_Size / 2) - (45 / 2), (Rows_Size / 2) + 1);
    printf("%c ", 186);
    for (int i = 0; i < 43; i++) {
        gotoxy(((Cols_Size / 2) - (40 / 2)) + i, (Rows_Size / 2) + 1);
        printf(" ");
        printf(" %c", 186);
        gotoxy((Cols_Size / 2) - (45 / 2), (Rows_Size / 2) + 2);
    }
    printf("%c%c", 200, 205);

    for (int lower = 0; lower < 43; lower++) {
        printf("%c", 205);
    }
    printf("%c%c", 205, 188);
    disableCursor();
    for (int i = 0; i < 43; i++) {
        gotoxy(((Cols_Size / 2) - (40 / 2)) + i, (Rows_Size / 2) + 1);
        printf("%c", 219);
        Sleep(33);
        gotoxy((Cols_Size / 2) - (45 / 2), (Rows_Size / 2) + 2);
    }
    enableCursor();
    PlaySound(TEXT("Loading.wav"), NULL, SND_ASYNC);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 8);
    printf("%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 203, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 7);
    printf("%c" FLASHING_GREEN " %c " RESET "%c" FLASHING_RED " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 6);
    printf("%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 206, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 5);
    printf("%c" FLASHING_YELLOW " %c " RESET "%c" FLASHING_BLUE " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 4);
    printf("%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 202, 205, 205, 205, 188);
    gotoxy((Cols_Size / 2) - (16 / 2), (Rows_Size / 2) - 1);
    printf("  C O M P L E T E   ");
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 4);
    system("pause");
}

void start_game() {
    system("cls");

    // Miniature scale Game Board layout
    gotoxy((Cols_Size / 2) - (9 / 2), (Rows_Size / 2) - 2);
    printf("%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 203, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (9 / 2), (Rows_Size / 2) - 1);
    printf("%c" FLASHING_GREEN " %c " RESET "%c" FLASHING_RED " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (9 / 2), (Rows_Size / 2));
    printf("%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 206, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (9 / 2), (Rows_Size / 2) + 1);
    printf("%c" FLASHING_YELLOW " %c " RESET "%c" FLASHING_BLUE " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (9 / 2), (Rows_Size / 2) + 2);
    printf("%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 202, 205, 205, 205, 188);

    // Typography of the word " SIMON "
    gotoxy((Cols_Size / 2) - (40 / 2), (Rows_Size / 2) - 7);
    printf(" %c%c", 220, 220);
    gotoxy((Cols_Size / 2) - (40 / 2), (Rows_Size / 2) - 6);
    printf("%c%c  %c%c%c %c%c%c%c%c %c%c%c %c%c%c %c", 223, 220, 223, 219, 223, 219, 223, 220, 223, 219, 219,223, 219, 219, 223, 220, 219);
    gotoxy((Cols_Size / 2) - (40 / 2), (Rows_Size / 2) - 5);
    printf("%c%c%c %c%c%c %c %c %c %c%c%c %c %c%c%c", 220, 220, 223, 220, 219, 220, 219, 223, 219, 219, 220, 219, 219, 223, 220, 219);
    
    // Typography of the word " SAYS "
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 7);
    printf(" %c%c          %c%c", 220, 220, 220, 220);
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 6);
    printf("%c%c  %c%c%c %c %c %c%c", 223, 220, 220, 223, 219, 219, 219, 223, 220);
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 5);
    printf("%c%c%c %c%c%c  %c  %c%c%c", 220, 220, 223,219, 223, 219, 219, 220, 220, 223);
    
    // Development of the " Start Game " button
    gotoxy((Cols_Size / 2) - 7, (Rows_Size / 2) + 5);
    printf(FLASHING_WHITE "< Start  Game >" RESET);
    gotoxy((Cols_Size / 2) - (31 / 2), (Rows_Size / 2) + 6);
    printf(BLACK);
    system("pause");
    printf(RESET); 

    // Define second fase of the function, designed to prepare the player
    system("cls");
    PlaySound(TEXT("Background.wav"), NULL, SND_ASYNC);
    sleep(1);
    simonSays();
    restart();
    sleep(1);
    green();
    red();
    yellow();
    blue();
    restart();
    system("cls");
    gotoxy((Cols_Size / 2) - (11 / 2), (Rows_Size / 2) - 1);
    printf("< P L A Y >");
    sleep(3);
}

void game_over(int level) {
    system("cls");
    disableCursor();
    PlaySound(TEXT("Game_Over.wav"), NULL, SND_ASYNC);

    // Miniature scale Game Board layout
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 3);
    printf("%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 203, 205, 205, 205, 187);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 2);
    printf("%c" FLASHING_GREEN " %c " RESET "%c" FLASHING_RED " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c%c%c%c%c%c%c", 204, 205, 205, 205, 206, 205, 205, 205, 185);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2));
    printf("%c" FLASHING_YELLOW " %c " RESET "%c" FLASHING_BLUE " %c " RESET "%c", 186, 219, 186, 219, 186);
    gotoxy((Cols_Size / 2) - (7 / 2), (Rows_Size / 2) + 1);
    printf("%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 202, 205, 205, 205, 188);
    sleep(1);

    // Typography of the word " GAME "
    gotoxy((Cols_Size / 2) - (45 / 2), (Rows_Size / 2) - 1);
    printf("%c%c%c %c%c%c %c%c%c%c%c %c%c%c", 219, 223, 223, 220, 223, 219, 219, 223, 220, 223, 219, 219, 223, 223);
    gotoxy((Cols_Size / 2) - (45 / 2), (Rows_Size / 2));
    printf("%c%c%c %c%c%c %c %c %c %c%c%c \n", 219, 220, 219, 219, 223, 219, 219, 223, 219, 219, 219, 220);
    sleep(1);

    // Typography of the word " OVER "
    gotoxy((Cols_Size / 2) + 8, (Rows_Size / 2) - 1);
    printf("%c%c%c %c %c %c%c%c %c%c%c", 219, 223, 219, 219, 219, 219, 223, 223, 219, 223, 219);
    gotoxy((Cols_Size / 2) + 8, (Rows_Size / 2));
    printf("%c%c%c %c%c%c %c%c%c %c%c%c \n", 219, 220, 219, 223, 220, 223, 219, 219, 220, 219, 223);
    sleep(2);

    gotoxy((Cols_Size / 2) - 8, (Rows_Size / 2) + 3);
    printf("[ Score Level : %i ]", level);
    gotoxy((Cols_Size / 2) - (30 / 2), (Rows_Size / 2) + 9);
    printf(BLACK);
    system("pause");
    printf(RESET);
}

void wasd() {
    // gotoxy((Cols_Size / 2) - (22 / 2), (Rows_Size / 2) + 8);
    gotoxy((Cols_Size / 2) - (56 / 2), (Rows_Size / 2) + 11);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    gotoxy((Cols_Size / 2) - (56 / 2), (Rows_Size / 2) + 12);
    printf("%c    "    "[W]" GREEN " Green    " RESET   "[A]" YELLOW " Yellow    " RESET "[S]" BLUE " Blue    " RESET "[D]" RED " Red    " RESET "%c " , 179, 179);
    gotoxy((Cols_Size / 2) - (56 / 2), (Rows_Size / 2) + 13);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
}

void level(int level) {
    gotoxy((Cols_Size / 2) + 48, 1);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 218, 196, 196, 196, 196, 196, 196, 196, 196, 196, 191);
    gotoxy((Cols_Size / 2) + 48, 2);
    printf("%c Level %i %c", 179, level, 179);
    gotoxy((Cols_Size / 2) + 48, 3);
    printf("%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
}

void simon() {
    // Typography of the word " SIMON "
    gotoxy((Cols_Size / 2) - (42 / 2), (Rows_Size / 2) - 12);
    printf(" %c%c", 220, 220);
    gotoxy((Cols_Size / 2) - (42 / 2), (Rows_Size / 2) - 11);
    printf("%c%c  %c%c%c %c%c%c%c%c %c%c%c %c%c%c %c", 223, 220, 223, 219, 223, 219, 223, 220, 223, 219, 219,223, 219, 219, 223, 220, 219);
    gotoxy((Cols_Size / 2) - (42 / 2), (Rows_Size / 2) - 10);
    printf("%c%c%c %c%c%c %c %c %c %c%c%c %c %c%c%c", 220, 220, 223, 220, 219, 220, 219, 223, 219, 219, 220, 219, 219, 223, 220, 219);
}

void says() {
    // Typography of the word " SAYS "
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 12);
    printf(" %c%c          %c%c", 220, 220, 220, 220);
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 11);
    printf("%c%c  %c%c%c %c %c %c%c", 223, 220, 220, 223, 219, 219, 219, 223, 220);
    gotoxy((Cols_Size / 2) + 5, (Rows_Size / 2) - 10);
    printf("%c%c%c %c%c%c  %c  %c%c%c", 220, 220, 223,219, 223, 219, 219, 220, 220, 223);
}

void simonSays() {
    simon();
    sleep(1);
    says();
    sleep(1);
}

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void disableCursor() {
    printf("\e[?25l");
}

void enableCursor() {
    printf("\e[?25h");
}