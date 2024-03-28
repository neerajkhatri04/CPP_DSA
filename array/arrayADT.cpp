#include <iostream>
#include <stdio.h>

struct array {
    int *A;
    int length;
    int size;
};

void display(struct array arr) {
    for(int i = 0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

void append(struct array *arr, int x) {
    if(arr->length < arr->size) {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

void insert(struct array *arr, int n, int x) {
    if((arr->length < arr->size) && n>=0 && n<=arr->length) {
        for(int i = arr->length; i>n ; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[n] = x;
        arr->length++;
    }
}

void remove(struct array *arr, int index) {
    if(index >= 0 && index<arr->length) {
        for(int i = index; i<arr->length; i++) {
           arr->A[i] = arr->A[i+1];
        }
    }
    arr->length--;
}

//Element should be unique for full traversal in linearSearch

int linearSearch(struct array arr, int key) {
    for(int i = 0; i<arr.length; i++) {
        if(arr.A[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(struct array arr, int key){

    int start = 0;
    int end = arr.length-1;
    int mid = (start + end)/2;

    while(start <= end){
        mid = (start + end)/2;
        
        if(arr.A[mid] < key){
            start = mid+1;
        } else if (arr.A[mid] > key){
            end = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}


int RbinarySearch(struct array arr, int h, int l, int key){
    
    int mid = (l+h)/2;

    if(l<=h){

        if(arr.A[mid] == key) {
            return mid;
        } else if (arr.A[mid] > key) {
            return RbinarySearch(arr, mid-1, l, key);
        } else {
            return RbinarySearch(arr, h, mid+1, key);
        }
    }
    return -1;
}

int Rsum(struct array arr, int n) {
    
    if(n == 0) {
        return arr.A[0];
    }
    
    return Rsum(arr, n-1) + arr.A[n];
}

// void reverse(struct array *arr) {

//     int j = arr->length-1;
//     for(int i = 0; i<j; i++){
//         int temp = arr->A[i];
//         arr->A[i] = arr->A[j];
//         arr->A[j] = temp;
//         j--;
//     }
// }

void reverse(struct array *arr) {
    int i;
    int j;
    for(i = 0, j = arr->length-1; i<j; i++, j--){
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main() {

    struct array a1;
    
    printf("Enter the size of array: ");
    scanf("%d", &a1.size);
    
    a1.A = (int *)malloc(a1.size * sizeof(int)); // a1.A = new int[size];
    
    printf("Enter the length: ");
    scanf("%d", &a1.length);
    
    for(int i = 0; i<a1.length; i++) {
            a1.A[i] = i+1;
    }

    // insert(&a1, 3, 0);
    // remove(&a1, 2);

    // std::cout<<RbinarySearch(a1,a1.length-1, 0, 5)<<std::endl;
    // std::cout<<Rsum(a1, a1.length-1)<<std::endl;

    reverse(&a1);

    display(a1);
    
    return 0;
}