#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 12
#define HIGHT 20

int gameover, score;
int screen[HIGHT][WIDTH];
int piece_x, piece_y;


void setup() {
    gameover = 0;
    score = 0;
    piece_x = -1;
    piece_y = -1;
    for (int i = 0; i < HIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == HIGHT-1) {
                screen[i][j] = 2;
            } else if (j == 0 || j == 11) {
                printf("|");
                screen[i][j] = 3;
            }
        }
        
    }
    
}

void draw() {
    for (int i = 0; i < HIGHT;i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == HIGHT-1) {
                printf("_");
            } else if (j == 0 || j == 11) {
                printf("|");
            } else {
                if (screen[i][j] == 0) {
                    printf(" ");
                } else {
                    printf("o");
                }
            }           
        }
        printf("\n");
    }
    
}

void logic() {
    if (piece_x == -1) {
        piece_x = 5;
        piece_y = 0;
        screen[piece_y][piece_x] = 1;
        return;
    }

    if (screen[piece_y+1][piece_x] == 2) {
        piece_x = -1;
        return;
    }

    
    screen[piece_y][piece_x] = 0;
    piece_y++;
    screen[piece_y][piece_x] = 1;
    
}

int main() {
    setup();
    while (!gameover) {
        draw();
        logic();
        Sleep(500);
    }
    return 0;
}