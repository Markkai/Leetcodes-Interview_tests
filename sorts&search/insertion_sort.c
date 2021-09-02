#include <stdio.h>
#include <stdlib.h>

void inser_sort(int *ar, int n){
    int i,j,k;
    for(i=1; i<n; i++){
        k = ar[i];
        j=i-1;
        while(j>=0 && ar[j]>k){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = k;
    }
}

int main(){
    int i;

    int arr[6] = {23,56,45,12,89,78};
    printf("Unsorted array: ");
    for(i=0; i<6; i++){
        printf("%3d", arr[i]);
    }
    printf("\n");

    inser_sort(arr, 6);
    printf("After sort: ");
    for(i=0; i<6; i++)
        printf("%3d", arr[i]);

    printf("\n");
    system("pause");
    return 0;

}




/* Answer

void inser_sort(int *ar, int n){
    int i,j,key;
    for(i=1; i<n; i++){
        key = ar[i];
        j=i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}

*/
