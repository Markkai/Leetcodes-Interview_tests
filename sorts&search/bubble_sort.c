#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *ar, int n){

    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(ar[j] > ar[j+1]){
                int tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }
}
int main(){

    int i;
    srand(time(NULL));
    int arr[5];
    printf("Unsorted array: ");
    for(i=0; i<5; i++){
        int x = (rand()%100);
        arr[i] = x;
    }
    for(i=0; i<5; i++)
        printf("%3d", arr[i]);

    printf("\n");
    bubble_sort(arr, 5);
    printf("After bubble sort: ");
    for(i=0; i<5; i++)
        printf("%3d", arr[i]);
    printf("\n");
    system("pause");
    return 0;
}


/* Answer
void bubble_sort(int arr[], int n){

    int i,j,tmp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
*/
