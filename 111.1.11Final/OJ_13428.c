#include <stdio.h>

int check_if_win(char board[6][7], char ox, int row, int col){
    int length=1,max=1;
    int a=row,b=col;
    a++;
    while(a<6&&board[a][b]==ox){
        length++;
        a++;
    }
    max = max>length? max:length;//down
    length=1;
    a=row;b=col+1;
    while(b<7&&board[a][b]==ox){
        length++;
        b++;
    }
    a=row;b=row-1;
    while(b>-1&&board[a][b]==ox){
        length++;
        b--;
    }
    max = max>length? max:length;//L&R
    length=1;
    a=row+1;b=col+1;
    while(a<6&&b<7&&board[a][b]==ox){
        length++;
        a++;b++;
    }
    a=row-1;b=row-1;
    while(a>-1&&b>-1&&board[a][b]==ox){
        length++;
        a--;b--;
    }
    max = max>length? max:length;//LU&RD
    length=1;
    a=row-1;b=col+1;
    while(a>-1&&b<7&&board[a][b]==ox){
        length++;
        a--;b++;
    }
    a=row+1;b=row-1;
    while(a<6&&b>-1&&board[a][b]==ox){
        length++;
        a++;b--;
    }
    max = max>length? max:length;//LD&RU
    if(max>=4){
        printf("%c wins!\n",ox);
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++)printf("%c ",board[i][j]);
            printf("%c\n",board[i][6]);
        }
        return 1;
    }
    return 0;
}

int main(){
    char board[6][7];
    char ox='o';
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++)
            board[i][j]='-';
    while(1){
        int row=-1,col;
        scanf("%d",&col);
        while(row<5&&board[row+1][col]=='-')row++;
        board[row][col]=ox;
        if(check_if_win(board, ox, row, col))return 0;
        ox = ox=='o'? 'x':'o';
    }
            
}