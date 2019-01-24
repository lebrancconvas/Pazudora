#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define FIELD_WIDTH 8
#define FIELD_HEIGHT 8

int cursorX , cursorY;

int main() {
    while(1) {
        system("cls");
        for(int y = 0; y < FIELD_HEIGHT; y++) {
            for(int x = 0; x < FIELD_WIDTH; x++) {
                if(x == cursorX && y == cursorY) {
                    printf("*");
                }
                else {
                    printf(".");
                }
            }
            printf("\n");
        }
        switch(_getch()) {
            case 'w': cursorY--; break;
            case 'a': cursorX--; break;
            case 's': cursorY++; break;
            case 'd': cursorX++; break;
        }
    }
}