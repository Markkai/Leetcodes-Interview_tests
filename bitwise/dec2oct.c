#include <stdio.h>
#include <stdlib.h>
#define size 8

void show_oct(int n){
    int i,oct[size];
    for(i=1; i<=size; i++){
        oct[size-i] = n%8;
        n/=8;
    }
    for(i=0; i<size; i++)
        printf("%3d", oct[i]);

    printf("\n");
    system("pause");
    return 0;
}

int main(){
    int n;
    printf("Input dec_num to change: ");
    scanf("%d", &n);

    show_oct(n);

    system("pause");
    return 0;

}

