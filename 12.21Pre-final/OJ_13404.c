#include <stdio.h>

int main(){
    char board[8][8];
    int k[2];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;){
            char temp;
            scanf("%c",&temp);
            if(temp=='Q'||temp=='K'||temp=='-'){
                board[i][j]=temp;
                if(temp=='K'){
                    k[0]=i;
                    k[1]=j;
                }
                j++;
            }
        }
    }
    int q=0;
    for(int i=k[0]-1;i<k[0]+2;i++){
        for(int j=k[1]-1;j<k[1]+2;j++){
            int a=i, b=j, qq=0;
            if(a<0||b<0||a>7||b>7) continue;
            while(a>-1){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a--;
            }
            if(qq) continue;
            a=i;b=j;
            while(a<8){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a++;
            }
            if(qq) continue;
            a=i;b=j;
            while(b>-1){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                b--;
            }
            if(qq) continue;
            a=i;b=j;
            while(b<8){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                b++;
            }
            if(qq) continue;
            a=i;b=j;
            while(a>-1&&b>-1){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a--;b--;
            }
            if(qq) continue;
            a=i;b=j;
            while(a>-1&&b<8){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a--;b++;
            }
            if(qq) continue;
            a=i;b=j;
            while(a<8&&b>-1){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a++;b--;
            }
            if(qq) continue;
            a=i;b=j;
            while(a<8&&b<8){
                if(board[a][b]=='Q'){
                    qq=1;
                    break;
                }
                a++;b++;
            }
            if(qq) continue;
            printf("(%d,%d)\n",i,j);
            q=1;
        }
    }
    if(!q)printf("none\n");
}