#include <stdio.h>

int main(){
    char board[6][7];
    for(int i=0;i<6;i++)
        for(int j=0;j<7;j++)
            board[i][j]='-';
    int num;
    char ox,ox2;
    scanf("%d %c", &num, &ox);
    ox2 = ox=='o'? 'x' : 'o';
    while(num>0){
        int col,row=-1;
        scanf(" %d",&col);
        while(row<5&&board[row+1][col]=='-')row++;
        board[row][col]=ox;
        char temp=ox;
        ox=ox2;
        ox2=temp;
        num--;
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<7;j++) printf("%c ",board[i][j]);
        printf("\n");
    }
        
}