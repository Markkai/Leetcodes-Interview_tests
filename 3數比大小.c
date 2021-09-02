#include <stdio.h>
#include <stdlib.h>


int main(){

    int a,b,c;
    printf("Input 3 nums find max and min: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c){
        if(b>c){
            printf("Max: %d, Mid: %d, Min: %d\n", a,b,c);
        }
        else{
            printf("Max: %d, Mid: %d, Min: %d\n", a,c,b);
        }
    }
    else if(b>a && b>c){
        if(a>c)
            printf("Max: %d, Mid: %d, Min: %d\n", b,a,c);
        else
            printf("Max: %d, Mid: %d, Min: %d\n", b,c,a);
    }
    else if(c>a && c>b){
        if(b>a)
            printf("Max: %d, Mid: %d, Min: %d\n", c,b,a);
        else
            printf("Max: %d, Mid: %d, Min: %d\n", c,a,b);
    }
    else
        printf("a == b == c\n", a,b,c);

    system("pause");
    return 0;
}
