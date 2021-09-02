#include <stdio.h>
#include <stdlib.h>

/* Recursive */
int R_gcd(int x, int y){

    if(y==0)
        return x;
    else
        return R_gcd(y, x%y);

}
/* Loop */
int L_gcd(int x, int y){

    int rem;
    while(y!=0){
        rem = x%y;
        x=y;
        y=rem;
    }
    return x;
}

int main(){
    int x,y,GCD;
    printf("Input two num find gcd: ");
    scanf("%d  %d", &x,&y);
    GCD = R_gcd(x,y);
    printf("GCD = %d\n", GCD);
    system("pause");
    return 0;

}


/*

// Recursive
int R_gcd(int x, int y){
    if(y==0)
        return x;
    else
        return R_gcd(y,x%y);

}

// Loop
int L_gcd(int x, int y){
    int tmp;
    while(y!=0){
        tmp = x%y;
        x=y;
        y=tmp;
    }
    return x;
}
*/
