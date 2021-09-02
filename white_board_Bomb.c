#include <stdio.h>
#include <stdlib.h>

/* Bomb = 3,4; 5,5 ; 6,7 */

int main(){

    int Row = 10;
    int Col = 10;
    int i,j;
    for(i=1; i<=Row; i++){
        for(j=1; j<=Col; j++){
            if(i==3 && j==4){
                printf("B ");
            }
            else if(i==5 && j==5){
                printf("B ");
            }
            else if(i==6 && j==7){
                printf("B ");
            }
            else
                printf("- ");
        }
        printf("\n");
    }

}



/*
int main(){

    int row = 8, col = 8;
    int i, j;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(i==5 && j==5)
                printf("X ");
            else if(i==6 && j==7)
                printf("X ");
            else if(i==3 && j==4)
                printf("X ");
            else
                printf("O ");
        }
        printf("\n");
    }

    system("pause"); return 0;
}
*/
