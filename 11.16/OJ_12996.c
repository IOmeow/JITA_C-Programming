#include <stdio.h>

static int row = 8, col = 8;

void CreateBoard(char arr[row][col]);
void PlaceStone(char arr[row][col]);
void UpdateBoardInDir(char self, char opnt, int r, int c, int r_step, int c_step, char arr[row][col]);
void PrintBoard(char arr[row][col]);

int main(){

    char board[row][col];

    CreateBoard(board);
    PlaceStone(board);
    PrintBoard(board);

    return 0;
}

void CreateBoard(char arr[row][col]){

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col;){
            char c;
            scanf("%c", &c);
            if (c == 'x' || c == 'o' || c == '_'){
                arr[i][j]=c;
                j++;
            }
        }
    }
}

void PlaceStone(char arr[row][col]){
    // turn: whose turn to play
    // self: the color of stone I hold
    // opnt: the color of stone my oponent holds
    char turn, self, opnt;
    int r, c;

    scanf(" %c %d %d", &turn, &r, &c);

    if (turn == 'x'){
        self = 'x';
        opnt = 'o';
    }
    else{
        self = 'o';
        opnt = 'x';
    }

    arr[r][c] = self;


    // check 8 directions
    for (int i = -1; i <= 1; i++){
        for (int j = -1; j <= 1; j++){
            if (i == 0 && j == 0)
                continue;
            UpdateBoardInDir(self, opnt, r, c, i, j, arr);
        }
    }
}

void UpdateBoardInDir(char self, char opnt, int r, int c, int r_step, int c_step, char arr[row][col]){

    // has_self:    代表最後有遇到跟自己同樣顏色的棋子
    // count_opnt:  代表總共經過多少顆敵方的棋子
    int has_self = 0, count_opnt = 0;

    // Check
    for (int i = r + r_step, j = c + c_step; i < row && i > -1 && j < col && j > -1; i = i + r_step, j = j + c_step){
        if (arr[i][j] == '_'){
            // continue;
            break;
        }
        else if (arr[i][j] == opnt){
            count_opnt++;
        }
        else if (arr[i][j] == self){
            has_self=1;
            break;
        }
    }

 

    // Update
    if (has_self && count_opnt){
        for (int i = r + r_step, j = c + c_step, k = 0; k < count_opnt; i = i + r_step, j = j + c_step, k++){
            arr[i][j] = self;
        }
    }
}

void PrintBoard(char arr[row][col]){
    for (int i = 0; i < row; i++){
        printf("%c", arr[i][0]);
        for (int j = 1; j < col; j++){
            printf(" %c", arr[i][j]);
        }
        printf("\n");
    }
}