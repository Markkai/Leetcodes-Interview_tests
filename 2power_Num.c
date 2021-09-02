#include <stdio.h>
#include <stdlib.h>

int is2Power_bit(int n){
    if((n & (-n)) == n)
        return 1;
    else
        return 0;

}

int is2Power(int n){
    if((n & (n-1)) == 0)
        return 1;
    else
        return 0;
}

int main(){

    int n,res;
    printf("Input a number check weather is a 2 power number: ");
    scanf("%d", &n);
    res = is2Power_bit(n);
    if(res == 1)
        printf("yes\n");
    else
        printf("not\n");
}


/*

int is2Power_bitwise(int n){
    if((n & -n) == n)
        return 1;
    else
        return 0;

}

int is2Power(int n){
    if((n & (n-1)) == 0){
        return 1;
    }
    else
        return 0;
}

*/
