#include <stdio.h>
#include <stdlib.h>
#define size 32

void show_hex(int n){

    char hex[size];
    int idx=0, rem;
    while(n > 0){
        rem = n%16;
        switch(rem){
            case 10:
                hex[idx] = 'A';
                break;
            case 11:
                hex[idx] = 'B';
                break;
            case 12:
                hex[idx] = 'C';
                break;
            case 13:
                hex[idx] = 'D';
                break;
            case 14:
                hex[idx] = 'E';
                break;
            case 15:
                hex[idx] = 'F';
                break;
            default:
                hex[idx] = rem+48;
                break;
        }
        idx++;
        n/=16;
    }
    hex[idx-1] = '\0';
    for(int i=idx-1; i>=0; i--)
        printf("%c", hex[i]);

    printf("\n");
    system("pause");
}

int main(){

    int n;
    printf("Input dec_num to hex: ");
    scanf("%d", &n);

    show_hex(n);

    system("pause");
    return 0;
}



/*
void show_hex(int num){

    char hex[size];
    int rem = 0;
    int idx=0;
    while(num!=0){
        rem = num%16;
        switch(rem){
            case 10:
                hex[idx] = 'A';
                break;
            case 11:
                hex[idx] = 'B';
                break;
            case 12:
                hex[idx] = 'C';
                break;
            case 13:
                hex[idx] = 'D';
                break;
            case 14:
                hex[idx] = 'E';
                break;
            case 15:
                hex[idx] = 'F';
                break;
            default:
                hex[idx] = 48+rem;
                break;
        }
        num/=16;
        idx++;
    }
    hex[idx-1] = '\0';
    for(int i=idx-1; i>=0; i--){
        printf("%c ", hex[i]);
    }
    printf("\n");

}
*/
