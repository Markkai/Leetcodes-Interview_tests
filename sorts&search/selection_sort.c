#include <stdio.h>
#include <stdlib.h>


void sele_sort(int *ar, int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(ar[j] < ar[i]){
                int tmp = ar[j];
                ar[j] = ar[i];
                ar[i] = tmp;
            }
        }
    }
}

int main(){

    int i;
    int arr[6] = {56,23,12,89,78,45};
    printf("Numbers to sort: ");
    for(i=0; i<6; i++){
        printf("%3d", arr[i]);
    }
    printf("\n\n");

    sele_sort(arr, 6);

    printf("Print sorted numbers: ");
    for(i=0; i<6; i++)
        printf("%3d", arr[i]);
    printf("\n");

    system("pause");
    return 0;

}


/* Answer

void sele_sort(int *ar, int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(ar[j] < ar[i]){
                int tmp = ar[j];
                ar[j] = ar[i];
                ar[i] = tmp;
            }
        }
    }
}
*/
