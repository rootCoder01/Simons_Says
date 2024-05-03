// Subject : Algorithms & Data Structures
// Project : Simon Says
// File    : Header < .h >
// Name    : Color.h

#ifndef _COLOR
#define _COLOR

#define Cols_Size 120
#define Rows_Size 30

// Define ColorCode
#define RESET "\x1b[0m"
#define BLACK "\x1b[30m"
#define FLASHING_WHITE "\x1b[5;37m"

// Define the variants of the Green
#define GREEN "\x1b[0;32m"
#define BRIGHT_GREEN "\x1b[1;32m"
#define FLASHING_GREEN "\x1b[5;32m"

// Define the variants of the Red
#define RED "\x1b[0;31m"
#define BRIGHT_RED "\x1b[1;31m"
#define FLASHING_RED "\x1b[5;31m"

// Define the variants of the Yellow
#define YELLOW "\x1b[0;33m"
#define BRIGHT_YELLOW "\x1b[1;33m"
#define FLASHING_YELLOW "\x1b[5;33m"

// Define the variants of the Blue
#define BLUE "\x1b[0;34m"
#define BRIGHT_BLUE "\x1b[1;34m"
#define FLASHING_BLUE "\x1b[5;34m"

// Define the variants of the Cyan
#define CYAN "\x1b[0;36m"
#define BRIGHT_CYAN "\x1b[1;36m"
#define FLASHING_CYAN "\x1b[5;36m"

// Define the variants of the Magenta
#define MAGENTA "\x1b[0;35m"
#define BRIGHT_MAGENTA "\x1b[1;35m"
#define FLASHING_MAGENTA "\x1b[5;35m"

// Define Color Functions
void restart();
void green();
void red();
void yellow();
void blue();

// Define Graphic Functions
void loading();
void start_game();
void game_over(int level);
void wasd();
void level(int level);
void simon();
void says();
void simonSays();

// Define 
void gotoxy(int x, int y);
void disableCursor();
void enableCursor();

#endif