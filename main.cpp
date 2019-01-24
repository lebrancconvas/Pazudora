#include<stdio.h>
#include<conio.h>

#define FIELD_WIDTH 8
#define FIELD_HEIGHT 8

int cursorX , cursorY;

int main() {
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
    _getch();
}