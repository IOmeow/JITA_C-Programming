#include <stdio.h>

int if_K_here(char board[8][8], int x, int y){
    int a=x, b=y;
    while(a>-1){
        if(board[a][b]=='K')return 1;
        a--;
    }
    a=x;b=y;
    while(b>-1){
        if(board[a][b]=='K')return 1;
        b--;
    }
    a=x;b=y;
    while(b<8){
        if(board[a][b]=='K')return 1;
        b++;
    }
    a=x;b=y;
    while(a<8){
        if(board[a][b]=='K')return 1;
        a++;
    }
    a=x;b=y;
    while(a<8&&b<8){
        if(board[a][b]=='K')return 1;
        a++;b++;
    }
    a=x;b=y;
    while(a<8&&b>-1){
        if(board[a][b]=='K')return 1;
        a++;b--;
    }
    a=x;b=y;
    while(a>-1&&b<8){
        if(board[a][b]=='K')return 1;
        a--;b++;
    }
    a=x;b=y;
    while(a>-1&&b>-1){
        if(board[a][b]=='K')return 1;
        a--;b--;
    }
    return 0;
}

int main(){
    char board[8][8];
    int K[2], Q[2];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;){
            char c;
            scanf("%c",&c);
            if(c=='-'||c=='Q'||c=='K'){
                board[i][j]=c;
                if(c=='Q'){
                    Q[0]=i;
                    Q[1]=j;
                }
                if(c=='K'){
                    K[0]=i;
                    K[1]=j;
                }
                j++;
            }
        }
    }
    int K_notsafe=0;
    int a=Q[0], b=Q[1];
    while(a>-1){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a--;
                while(a>-1){
                    board[a][b]='X';
                    a--;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a--;
    }
    a=Q[0];b=Q[1];
    while(b>-1){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                b--;
                while(b>-1){
                    board[a][b]='X';
                    b--;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        b--;
    }
    a=Q[0];b=Q[1];
    while(b<8){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                b++;
                while(b<8){
                    board[a][b]='X';
                    b++;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        b++;
    }
    a=Q[0];b=Q[1];
    while(a<8){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a++;
                while(a<8){
                    board[a][b]='X';
                    a++;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a++;
    }
    a=Q[0];b=Q[1];
    while(a<8&&b<8){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a++;b++;
                while(a<8&&b<8){
                    board[a][b]='X';
                    a++;b++;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a++;b++;
    }
    a=Q[0];b=Q[1];
    while(a<8&&b>-1){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a++;b--;
                while(a<8&&b>-1){
                    board[a][b]='X';
                    a++;b--;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a++;b--;
    }
    a=Q[0];b=Q[1];
    while(a>-1&&b<8){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a--;b++;
                while(a>-1&&b<8){
                    board[a][b]='X';
                    a--;b++;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a--;b++;
    }
    a=Q[0];b=Q[1];
    while(a>-1&&b>-1){
        if(if_K_here(board,a,b)){
            if(board[a][b]=='K'){
                K_notsafe=1;
                a--;b--;
                while(a>-1&&b>-1){
                    board[a][b]='X';
                    a--;b--;
                }
                break;
            }
            else board[a][b]='V';
        }
        else board[a][b]='X';
        a--;b--;
    }
    if(K_notsafe)board[K[0]][K[1]]='V';
    else board[K[0]][K[1]]='-';
    for(int i=0;i<8;i++){
        for(int j=0;j<7;j++){
            printf("%c ",board[i][j]);
        }
        printf("%c\n",board[i][7]);
    }
}