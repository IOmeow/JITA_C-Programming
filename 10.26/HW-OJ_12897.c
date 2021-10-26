#include <stdio.h>

int main(){
    char Game[10][10],temp;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf(" %c",&Game[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(Game[i][j]=='x'){
                if(i>0){
                    if(Game[i-1][j]=='_')Game[i-1][j]='1';
                    else if(Game[i-1][j]!='x')Game[i-1][j]++;
                    if(j>0){
                        if(Game[i-1][j-1]=='_')Game[i-1][j-1]='1';
                        else if(Game[i-1][j-1]!='x')Game[i-1][j-1]++;
                    }
                }
                if(i<8){
                    if(Game[i+1][j]=='_')Game[i+1][j]='1';
                    else if(Game[i+1][j]!='x')Game[i+1][j]++;
                    if(j<8){
                        if(Game[i+1][j+1]=='_')Game[i+1][j+1]='1';
                        else if(Game[i+1][j+1]!='x')Game[i+1][j+1]++;
                    }
                }
                if(j>0){
                    if(Game[i][j-1]=='_')Game[i][j-1]='1';
                    else if(Game[i][j-1]!='x')Game[i][j-1]++;
                    if(i<8){
                        if(Game[i+1][j-1]=='_')Game[i+1][j-1]='1';
                        else if(Game[i+1][j-1]!='x')Game[i+1][j-1]++;
                    }
                }
                if(j<8){
                    if(Game[i][j+1]=='_')Game[i][j+1]='1';
                    else if(Game[i][j+1]!='x')Game[i][j+1]++;
                    if(i>0){
                        if(Game[i-1][j+1]=='_')Game[i-1][j+1]='1';
                        else if(Game[i-1][j+1]!='x')Game[i-1][j+1]++;
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