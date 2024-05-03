// Subject : Algorithms & Data Structures
// Project : Simon Says
// File    : Executable < .c >
// Name    : Simon.c

#include "simon.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

void game() {
    bool error = false; // bandera para guardar si hay errores para detener el programa.
    dqueue secuencia, aux; // los nombres de las colas que vamos a utilizar
    create_dq(&secuencia);
    create_dq(&aux);
    int tam = 0;
    disableCursor();
    while (!error) {
        system("cls");
        simonSays();
        restart();
        agregar(&secuencia);
        tam++;
        mostrar(secuencia, tam); // se imprime la secuencia a repetir
        restart();
        error = ingresar(&secuencia, &aux); // la variable error guarda si el usuario logró contestar correctamente a la secuencia o no
        // se guarda la secuencia en aux
        swap_dqs(&secuencia, &aux); // se intercambian la aux con la original
        }
    system("cls");
    mostrar(secuencia, 1);
    wasd();
    gotoxy((Cols_Size / 2) - (18 / 2), (Rows_Size / 2) + 8);
    printf("[ Correct Color ]");
    sleep(3);
    delet_dq(&secuencia);
    disableCursor();
    game_over(tam);
}

int main() {
    char key;
    loading();
    disableCursor();
    start_game();
    fflush(stdin);
    while(key != 27) {
        fflush(stdin);
        game();
        disableCursor();
        system("cls");
        gotoxy((Cols_Size / 2) - (36 / 2), (Rows_Size / 2) - 1);
        printf("Press any key to Play Again or [esc] to Exit", 27, 196, 217);
        key = getch();
    }
    enableCursor();
    exit(1);
    return 0;
}
