#include <stdio.h>
#include <stdlib.h>

int abs(int x){
    return (x ^ (x>>31) - (x>>31));
}

int main(){
    int a,res;
    printf("Input negative num: ");
    scanf("%d", &a);

    res = abs(a);
    printf("abs(%d) = %d\n", a, res);

    system("pause");
    return 0;
}
