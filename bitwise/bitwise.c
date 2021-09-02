#include <stdio.h>
#include <stdlib.h>
#define Set_bit(a,n) a |= (1<<n)
#define Clr_bit(a,n) a &= ~(1<<n)
#define Flp_bit(a,n) a ^= (1<<n)
#define Chk_bit(a,n) ((a & 1<<n) != 0)


int main(){

    int a=1;
    printf("%d\n", a);

    Set_bit(a,1);
    printf("%d\n", a);

    Clr_bit(a,1);
    printf("%d\n", a);

    Flp_bit(a,1);
    printf("%d\n", a);

    printf("Check bit: %d\n", Chk_bit(a,1));


}




/* Answer
#include <stdio.h>
#include <stdlib.h>
#define Set_bit(a,n) (a |= (1<<n))
#define Clr_bit(a,n) (a &= ~(1<<n))
#define Chk_bit(a,n) ((a & (1<<n)) != 0)
#define Flp_bit(a,n) (a ^= (1<<n))
#define SIZE 8

void show_binary(int n){

    int i, b[SIZE]={0};
    for(i=1; i<=SIZE; i++){
        b[SIZE-i] = n%2;
        n=n/2;
    }
    for(i=0; i<SIZE; i++){
        printf("%2d",b[i]);
    }
    printf("\n");

}
int main(){

    int a = 1;
    printf("%x\n", a);
    show_binary(a);

    Set_bit(a,1);
    printf("%x\n", a);
    show_binary(a);

    Clr_bit(a,1);
    printf("%x\n", a);
    show_binary(a);

    Flp_bit(a,1);
    printf("%x\n", a);
    show_binary(a);

    printf("%d\n", Chk_bit(a,1));

}
*/
