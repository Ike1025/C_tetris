#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 12
#define HIGHT 20

int gameover, score;
int screen[WIDTH][HIGHT];


void setup() {
    gameover = 0;
    score = 0;
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
                    printf("o");
                } else {
                    printf(" ");
                }
            }           
        }
        printf("\n");
    }
    
}

int main() {
    setup();
    draw();
    return 0;
}