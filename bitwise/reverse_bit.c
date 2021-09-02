#include <stdio.h>
#include <stdlib.h>

int reverse_bit(int n){
    int rev = 0;
    while(n > 0){
        rev <<= 1;
        if(n & 1 == 1)
            rev ^= 1;
        n >>= 1;
    }
    return rev;
}


int main(){
    int n = 11; //binary: 1011
    int res = reverse_bit(n);
    printf("%d\n", res);

    system("pause"); return 0;
}


/* reverse bit
int reverse_bit(int n){
    int rev = 0;
    while(n>0){
        rev <<= 1;
        if(n & 1 == 1)
            rev ^= 1;
        n >>= 1;
    }
    return rev;
}
*/
