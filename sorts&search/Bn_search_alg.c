#include <stdio.h>
#include <stdlib.h>

void Bnsearch(int *ar, int n, int key){
    int L=0, R=n-1, flg=0, mid;
    while(L<=R){
        mid = (L+R)/2;
        if(key == ar[mid]){
            printf("Found it, pos: %d\n", mid+1);
            flg=1;
            break;
        }
        else if(key < ar[mid])
            R = mid-1;
        else
            L = mid+1;
    }
    if(flg==0)
        printf("Not found\n");
}


int main(){

    int i,key;
    int arr[6] = {12,23,45,56,78,89};
    for(i=0; i<6; i++){
        printf("%3d", arr[i]);
    }
    printf("\n");
    printf("Input want to search number: ");
    scanf("%d", &key);
    Bnsearch(arr, 6, key);

    system("pause");
    return 0;
}



/* Answer
void Bnsearch(int *ar, int n, int key){
    int L = 0, R = n-1, flg=0;
    while(L<=R){
        int mid = (L+R)/2;
        if(key == ar[mid]){
            printf("Found it, position is: %d\n", mid+1);
            flg=1;
            break;
        }
        else if(key < ar[mid]){
            R = mid-1;
        }
        else{
            L = mid+1;
        }
    }
    if(flg==0)
        printf("Not found\n");
}


*/




