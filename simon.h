// Subject : Algorithms & Data Structures
// Project : Simon Says
// File    : Header < .h >
// Name    : Simon.h

#include "queue.h"
#include "color.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <conio.h> // Se agrega la biblioteca conio.h para getch() en Windows
#include <windows.h>

typedef char element;

char convertir(int x);
bool leerusu(dqueue *ant, dqueue *nueva);
char get_char();
void swap_dqs(dqueue *a, dqueue *b);
void mostrar(dqueue dq, int lv);
void agregar(dqueue *dq);
void brillarchar(char x);

char convertir(int x) {
    switch (x) {
    case 0:
        return 'a';
        break;
    case 1:
        return 'w';
        break;
    case 2:
        return 's';
        break;
    case 3:
        return 'd';
        break;
    default:
        return '@';
        break;
    }
}

void agregar(dqueue *dq) {
    srand(time(NULL)); // para generar números aleatorios
    char s;             // s es el siguiente elemento en la cola
    s = convertir(rand() % 4); // se genera un número aleatorio y se convierte a char
    enqueue(dq, s);            // se agrega el nuevo elemento a la secuencia
}

bool ingresar(dqueue *ant, dqueue *nueva) {
    char c, r; // r es la respuesta correctas
    gotoxy((Cols_Size / 2) - (22 / 2), (Rows_Size / 2) + 8);
    printf("Enter Key :          ");
    wasd();
    while (!is_empty_dq(*ant)) {
        fflush(stdin);
        gotoxy((Cols_Size / 2) + 1, (Rows_Size / 2) + 8);
        c = get_char();
        printf("%c", &c);
        gotoxy((Cols_Size / 2) + 1, (Rows_Size / 2) + 8);
        sleep(1);
        brillarchar(c);
        r = dequeue(ant);
        if (c == r) {
            enqueue(nueva, r);
        } else {
            delet_dq(nueva);
            enqueue(nueva, r);
            return true; // el juego termina cuando el usuario se equivoca
        }
        // printf("%c", c);
    }
    printf("\n");
    return false;
}

char get_char() {
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    char buf = 0;
    DWORD bytesRead;

    INPUT_RECORD irInputRecord;
    DWORD dwEventsRead;

    while (ReadConsoleInputA(hStdin, &irInputRecord, 1, &dwEventsRead)) {
        if (irInputRecord.EventType == KEY_EVENT
            && irInputRecord.Event.KeyEvent.bKeyDown) {
            buf = irInputRecord.Event.KeyEvent.uChar.AsciiChar;
            break;
        }
    }

    return buf;
}

void swap_dqs(dqueue *a, dqueue *b){
	struct node_dq *aux_head= a->head, *aux_tail= a->tail; //auxiliares de pivote
	a->head= b->head;
	a->tail= b->tail;
	b->head= aux_head;
	b->tail= aux_tail;
}

void mostrar(dqueue dq, int lv){
	struct node_dq *aux= dq.head;
	element el;
	if(is_empty_dq(dq)){
		printf("--No hay nada que imprimir porque no hay elementos--\n");
	}
	while(aux!=NULL){
		el= aux->e;
		brillarchar(el);
		//printf("elemento %d: %c\n", i, el);
		aux= aux->next;
	}
	level(lv);
}

void brillarchar(char x){
	switch(x){
	case 'a': yellow();
		break;
	case 'w': green();
		break;
	case 's': blue();
		break;
	case 'd': red();
		break;
	default: printf("error???\n");;
		break;
	}
}
