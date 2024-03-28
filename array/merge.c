//Merge two sorted array in sorted manner
#include <stdio.h>
#include <stdlib.h>

int* merge(int *arr1, int *arr2) {

    int *arr3 = (int*)malloc(10*sizeof(int));

    int i = 0, j = 0, k = 0;

    while(i < 4 && j < 5) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < 4) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < 5) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    return arr3;
}

int main() {
    int *a1;
    a1 = (int *)malloc(4*sizeof(int));
    int *a2;
    a2 = (int *)malloc(5*sizeof(int));

    a1[0] = 1;
    a1[1] = 3;
    a1[2] = 5;
    // a1[3] = 7;
    a1[3] = 9;
    a2[0] = 0;
    a2[1] = 2;
    a2[2] = 4;
    a2[3] = 6;
    a2[4] = 8;

    int *a3 = merge(a1, a2);

    for(int i = 0 ; i < 9; i++){
        printf("%d ", a3[i]);
    }
}

