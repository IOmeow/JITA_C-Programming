#include <stdio.h>

int main(){
    char Game[4][4];
    int O=0,X=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf(" %c",&Game[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        if(Game[i][0]==Game[i][1]&&Game[i][0]==Game[i][2]&&Game[i][0]!='_'){
            printf("%c wins!\n",Game[i][0]);
            return 0;
        }
        if(Game[0][i]==Game[1][i]&&Game[0][i]==Game[2][i]&&Game[0][i]!='_'){
            printf("%c wins!\n",Game[0][i]);
            return 0;
        }
    }
    if(Game[0][0]==Game[1][1]&&Game[0][0]==Game[2][2]&&Game[0][0]!='_'){
        printf("%c wins!\n",Game[1][1]);
        return 0;
    }
    if(Game[0][2]==Game[1][1]&&Game[1][1]==Game[2][0]&&Game[2][0]!='_'){
        printf("%c wins!\n",Game[1][1]);
        return 0;
    }
    printf("Draw!\n");
    return 0;
}