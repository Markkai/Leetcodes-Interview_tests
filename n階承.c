#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,res=1;
    for(i=1; i<=5; i++)
        res *= i;
    printf("%d\n", res);
}




/*
int main(){

    int i,n, res=1;
    printf("input n return n!: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        res = res*i;
    }
    printf("%d\n", res);
    system("pause");
    return 0;
}
*/
