#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 10
#define HIGHT 20

int gameover, score;


void setup() {
    gameover = 0;
    score = 0;

}

void draw() {
    for (int i = 0; i < HIGHT;i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == HIGHT-1) {
                printf("_");
            } else if (j == 0 || j == 9) {
                printf("|");
            } else {
                printf(" ");
            }           
        }
        printf("\n");
    }
    
}

int main() {
    draw();
    return 0;
}