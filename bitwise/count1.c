#include <stdio.h>
#include <stdlib.h>


int main(){
    int a, cnt=0;

    printf("Input num count bit : ");
    scanf("%d", &a);
    while(a>0){
        if(a & 1 == 1)
            cnt++;
        a>>=1;
    }
    printf("bit 1: %d\n", cnt);
}







/*
int countbit(unsigned);

int main(){

    unsigned a;
    int cnts;
    printf("Input num count binary 1 bits: ");
    scanf("%d", &a);

    cnts = countbit(a);
    printf("bit counts: %d\n", cnts);
}

int countbit(unsigned s){
    int cnt=0;
    while(s>0){
        if((s & 0x01)==1)
            cnt++;
        s >>= 1;
    }
    return cnt;
}
*/
