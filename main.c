#include <stdio.h>
#include "pieces.h"

char board[8][8] = {
    {'R','N','B','Q','K','B','N','R'},
    {'P','P','P','P','P','P','P','P'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'p','p','p','p','p','p','p','p'},
    {'r','n','b','q','k','b','n','r'}
};

void printBoard() {
    printf("\n  0 1 2 3 4 5 6 7\n");
    for(int i = 0; i < 8; i++) {
        printf("%d ", i);
        for(int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("=== CHESS GAME STARTED ===\n");
    printBoard();
    return 0;
}
