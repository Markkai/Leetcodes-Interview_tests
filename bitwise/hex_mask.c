#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int check_hexbit(unsigned n){

    unsigned short mk = 0x0f;
    unsigned short res, tmp;
    while(n>1){
        tmp = n & mk;
        res = (n>>4) & mk;
        if(res != tmp)
            return FALSE;
        else{
            n>>=4;
            if(n==tmp)
                break;
        }
    }
    return TRUE;
}

int main(){

    if(check_hexbit(65535))
        printf("TRUE");
    else
        printf("False");

    printf("\n");
    system("pause");
    return 0;
}


/*
int check_hexbit(unsigned short n){

    unsigned short mk1 = 0x0F;
    unsigned short tmp,res;
    while(n>1){
        tmp = n & mk1;
        res = (n>>4) & mk1;
        if(res != tmp)
            return FALSE;
        else{
            n>>=4;
            if(n==tmp)
                break;
        }
    }
    return TRUE;
}
*/
