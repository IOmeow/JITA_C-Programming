#include <stdio.h>

int main(){
    int live=1;
    char map[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf(" %c",&map[i][j]);
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(map[i][j]=='o'){
                int a=i,b=j;
                while(a>-1&&map[a][j]!='x'){
                    if(map[a][j]=='p')live=0;
                    a--;
                }
                a=i;
                while(a<6&&map[a][j]!='x'){
                    if(map[a][j]=='p')live=0;
                    a++;
                }
                while(b<6&&map[i][b]!='x'){
                    if(map[i][b]=='p')live=0;
                    b++;
                }
                b=j;
                while(b>-1&&map[i][b]!='x'){
                    if(map[i][b]=='p')live=0;
                    b--;
                }
            }
        }
    }
    if(live)printf("The bomber man is alive\n");
    else printf("The bomber man is not alive\n");
    
    return 0;
}