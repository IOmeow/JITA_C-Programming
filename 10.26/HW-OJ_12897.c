#include <stdio.h>

int main(){
    char Game[10][10];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf(" %c",&Game[i][j]);
        }
    }
    int xy[2][8]={{-1,-1,-1,0,0,1,1,1,},
                  {-1,0,1,-1,1,-1,0,1}};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(Game[i][j]=='x'){
                for(int k=0;k<8;k++){
                    int x=i+xy[0][k],y=j+xy[1][k];
                    if(x>-1&&x<9&&y>-1&&y<9&&Game[x][y]!='x'){
                        if(Game[x][y]=='_')Game[x][y]='1';
                        else Game[x][y]++;
                    }
                }
            }
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<8;j++){
            printf("%c ",Game[i][j]);
        }
        printf("%c\n",Game[i][8]);
    }
}