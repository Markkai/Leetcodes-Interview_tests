#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int Partition(int *ar, int head, int tail){
    int pvt = ar[tail];
    int i=head-1, j;
    for(j=head; j<tail; j++){
        if(ar[j] < pvt){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    i++;
    swap(&ar[i], &ar[tail]);
    return i;
}

void quick_sort(int *ar, int head, int tail){
    int pivot;
    if(head < tail){
        pivot = Partition(ar, head, tail);
        quick_sort(ar, head, pivot-1);
        quick_sort(ar, pivot+1, tail);
    }
}

int main(){

    int i;

    int arr[6] = {23,12,45,89,78,56};
    printf("Unsorted array numbers: ");
    for(i=0; i<6; i++){
        printf("%3d ", arr[i]);
    }

    quick_sort(arr, 0, 6-1);

    printf("\nAfter sort: ");
    for(i=0; i<6; i++)
        printf("%3d", arr[i]);

    printf("\n");
    system("pause"); return 0;
}

/* Answer
void swap(int* a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int Partition(int *ar, int head, int tail){
    int pivot = ar[tail];
    int i = head-1;
    for(int j=head; j<tail; j++){
        if(ar[j] < pivot){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    i++;
    swap(&ar[i], &ar[tail]);
    return i;
}

void quick_sort(int *ar, int head, int tail){
    if(head < tail){
        int pivot = Partition(ar, head, tail);
        quick_sort(ar, head, pivot-1);
        quick_sort(ar, pivot+1, tail);
    }
}
*/
