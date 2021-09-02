#include <stdio.h>
#include <stdlib.h>

void merge(int *ar, int head, int mid, int tail){
    int lenA = mid-head+1;
    int lenB = tail-(mid+1)+1;
    int A[lenA], B[lenB];
    int i,j,k;
    //Copy num to sub
    for(i=0; i<lenA; i++)
        A[i] = ar[head+i];
    for(j=0; j<lenB; j++)
        B[j] = ar[mid+1+j];
    //merge sub to ar
    i=0; j=0; k=head;
    while(i<lenA && j<lenB){
        if(A[i] < B[j]){
            ar[k] = A[i];
            i++;
        }
        else{
            ar[k] = B[j];
            j++;
        }
        k++;
    }
    //merge remains
    while(i<lenA){
        ar[k] = A[i];
        i++; k++;
    }
    while(j<lenB){
        ar[k] = B[j];
        j++; k++;
    }
}

void merge_sort(int *ar, int head, int tail){

    int mid;
    if(head < tail){
        mid = (head+tail)/2;
        merge_sort(ar, head, mid);
        merge_sort(ar, mid+1, tail);
        merge(ar, head, mid, tail);
    }
}


int main(){

    int i;
    int arr[6] = {23,45,12,78,48,89};
    printf("Numbers to sort: ");
    for(i=0; i<6; i++){
        printf("%3d", arr[i]);
    }
    printf("\n\n");

    merge_sort(arr, 0, 6-1);

    printf("Print sorted numbers: ");
    for(i=0; i<6; i++)
        printf("%3d", arr[i]);
    printf("\n");

    system("pause");
    return 0;
}

/* Answer
void merge(int ar[], int head, int mid, int tail){

    //create two sub-array
    //A[head...mid] , B[mid+1...tail]
    int lenA = mid - head+1;
    int lenB = tail-(mid+1)+1;
    int A[lenA];
    int B[lenB];

    //Copy data to sub-array A,B
    int i,j,k;
    for(i=0; i<lenA; i++)
        A[i] = ar[head+i];
    for(j=0; j<lenB; j++)
        B[j] = ar[mid+1+j];

    //Merge two array back to ar[]
    i= 0;
    j= 0;
    k= head;
    while(i<lenA && j<lenB){
        if(A[i] < B[j]){
            ar[k] = A[i];
            i++;
        }
        else{
            ar[k] = B[j];
            j++;
        }
        k++;
    }
    //Copy remaining element into ar[]
    //if A[] or B[] haven't finished scanning
    while(i < lenA){
        ar[k] = A[i];
        i++;
        k++;
    }
    while(j < lenB){
        ar[k] = B[j];
        j++;
        k++;
    }
}

void merge_sort(int ar[], int head, int tail){
    if(head < tail){
        int mid = (head+tail)/2;
        merge_sort(ar, head, mid);
        merge_sort(ar, mid+1, tail);
        merge(ar, head, mid, tail);
    }
}

*/
