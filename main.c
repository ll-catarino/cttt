#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {	
    char table [3][3] = {'0', '0', '0', '0', '0', '0', '0', '0', '0'};
    bool isOver = false;
    char position = 0;
    char player = 'X';

    char map [9][3] = {
        {1, 2, 0},
        {2, 2, 1},
        {3, 2, 2},
        {4, 1, 0},
        {5, 1, 1},
        {6, 1, 2},
        {7, 0, 0},
        {8, 0, 1},
        {9, 0, 2},
    };

    while(!isOver) {
        scanf("%c", &position);
        table[map[position][1]][map[position][2]] = player;
        if (player == 'X') { player = 'O'; } else { player = 'X'; };
        
        for (char i = 0; i < 3; i++) {
            for (char j = 0; j < 3; j++) {
                printf("%c ",table[i][j]); 
                if (j==2)
                    printf("\n");
            }
        }
    }
}
