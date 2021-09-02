#include <stdio.h>
#include <stdlib.h>
#define size 16

void show_bn(int n){

    int i,b[size];
    for(i=1; i<=size; i++){
        b[size-i] = n%2;
        n/=2;
    }
    for(i=0; i<size; i++)
        printf("%3d", b[i]);
}

int main(){

    int n;
    printf("Input Dec_num to Bn_num : ");
    scanf("%d", &n);

    show_bn(n);

    system("pause");
    return 0;
}
