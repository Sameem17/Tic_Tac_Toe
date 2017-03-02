/*
 * TIC_TAC_TOE
 *
 * GitHub Repository: https://github.com/BytesClub/Tic_Tac_Toe
 * Copyright (C) BytesClub 2017, MIT 
 *
 * helpers.c
*/

#include "helpers.h"

void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF TIC_TAC_TOE\n");
    usleep(2000000);
}

void init(int n, int* A)
{
    // TODO
}

void show(int n, int* A)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n && (!j || putchar('|')); j++)
	    printf(" %c ", val(A[i * n + j]));
	for(int j = 0; j < n; j++)
	    putchar('-');
    }
}

void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

int check(int n, int* A)
{
    // TODO
    return 0;
}
