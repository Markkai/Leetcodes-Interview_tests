#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b){

    int A = *((int*)a); //typecasting to int* and get value
    int B = *((int*)b);
//    return A-B;          //A-B is positive qsort will increase sort
//    return B-A;          //B-A is negative qsort will decrease sort
    return abs(A)-abs(B);  //ignore the negative sort pure number
}

int main(){

    int i, A[] = {-31,22,-3,40,-6,4};
    qsort(A, 6, sizeof(int), compare);

    for(i=0; i<6; i++)
        printf("%3d", A[i]);

}
