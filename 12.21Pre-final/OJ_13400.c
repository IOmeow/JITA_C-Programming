#include <stdio.h>

int main(){
    char board[6][7];
    for(int i=0;i<6;i++){
        for(int j=0;j<7;){
            char temp;
            scanf("%c",&temp);
            if(temp=='o'||temp=='x'||temp=='-'){
                board[i][j]=temp;
                j++;
            }
        }
    }
    int col,row=-1;
    char ox;
    scanf("%d %c",&col,&ox);
    // col-=1;
    while(board[row+1][col]=='-'){
        row++;
    }
    int len[4]={1,1,1,1};
    int i,j;
    i=row+1;j=col;
    while(i<6){
        if(board[i][j]!=ox) break;
        else len[0]++;
        i++;
    }
    i=row;j=col-1;
    while(j>-1){
        if(board[i][j]!=ox) break;
        else len[1]++;
        j--;
    }
    i=row;j=col+1;
    while(j<7){
        if(board[i][j]!=ox) break;
        else len[1]++;
        j++;
    }
    i=row+1;j=col+1;
    while(i<6&&j<7){
        if(board[i][j]!=ox) break;
        else len[2]++;
        i++;j++;
    }
    i=row-1;j=col-1;
    while(i>-1&&j>-1){
        if(board[i][j]!=ox) break;
        else len[2]++;
        i--;j--;
    }
    i=row-1;j=col+1;
    while(i>-1&&j<7){
        if(board[i][j]!=ox) break;
        else len[3]++;
        i--;j++;
    }
    i=row+1;j=col-1;
    while(i<6&&j>-1){
        if(board[i][j]!=ox) break;
        else len[3]++;
        i++;j--;
    }
    int maxlen = len[0]>len[1] ? len[0] : len[1];
    maxlen = maxlen>len[2] ? maxlen : len[2];
    maxlen = maxlen>len[3] ? maxlen : len[3];
    printf("%d\n", maxlen);
}