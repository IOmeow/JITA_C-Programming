#include <stdio.h>

int main(){
    char Game[7][7];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf(" %c",&Game[i][j]);
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(Game[i][j]=='o'){
                int a=i,b=j;
                while(a>0&&Game[a-1][j]!='x'){
                    Game[a-1][j]='=';
                    a--;
                }
                a=i;
                while(a<5&&Game[a+1][j]!='x'){
                    Game[a+1][j]='=';
                    a++;
                }
                while(b>0&&Game[i][b-1]!='x'){
                    Game[i][b-1]='=';
                    b--;
                }
                b=j;
                while(b<5&&Game[i][b+1]!='x'){
                    Game[i][b+1]='=';
                    b++;
                }
                for(int i=0;i<6;i++){
                    for(int j=0;j<5;j++){
                        printf("%c ",Game[i][j]);
                    }
                    printf("%c\n",Game[i][5]);
                }
                return 0;
            }
        }
    }
}