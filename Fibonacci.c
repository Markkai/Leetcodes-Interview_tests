#include <stdio.h>
#include <stdlib.h>


int main(){

    int a[10];
    a[0] = a[1] = 1;
    for(int i=2; i<10; i++)
        a[i] = a[i-1] + a[i-2];
    for(int i=0; i<10; i++)
        printf("%3d", a[i]);

}





/* Dynamic
int main(){

    int i,arr[30];
    arr[0] = arr[1] = 1;
    for(i=2; i<30; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(i=0; i<30; i++)
        printf("%5d", arr[i]);
    printf("\n");
    system("pause");
    return 0;
}*/


/* Recursion
int fib(int n){

    if(n==1 || n==2)
        return 1;
    else if(n>=3)
        return fib(n-1)+fib(n-2);
}
*/
/*
int main(){

    int i, n;
    printf("Input array length: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input array numbers: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
        printf("%3d", arr[i]);
    printf("\nFib: \n");
    for(i=0; i<n; i++)
        printf("%3d", fib(arr[i]));
    printf("\n");

    system("pause");
    return 0;
}
*/
