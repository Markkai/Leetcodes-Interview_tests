#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,c=1,Dec=0;
    printf("Input binary: ");
    scanf("%d", &n);
    while(n>0){
        Dec += (n%10)*c;
        n/=10;
        c*=2;
    }

    printf("Dec: %d\n",Dec);
    system("pause"); return 0;
}
