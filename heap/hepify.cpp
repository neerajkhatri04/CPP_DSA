#include <iostream>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int temp;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest]<arr[right]){
        largest = right;
    }                             

    if(largest!=i){
        temp = arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        i = largest;
        heapify(arr, n, i);
    }
}

void buildHeap(int arr[], int n){
    for(int i = n/2-1; i>=0; --i){
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n) {

    int temp;

    while(n!=1){
        temp = arr[0];
        arr[n-1] = arr[0];
        arr[0] = temp;
        n--;
        heapify(arr,n, 0);
    }
}
 

int main() {

    int arr[] ={12,15,13,11,14};
    int n= sizeof(arr) / sizeof(arr[0]);
    buildHeap(arr, n);

    for(int i = 0; i<n;  ++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    heapSort(arr, n);
    for(int i = 0; i<n;  ++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}