#include <iostream>

class Heap {
public:

    int *arr;
    int size;
    int arrSize;

    Heap() {
        size = 0;
    }
    Heap(int arrSize){
        size = 0;
        this->arrSize = arrSize;
        arr = new int[arrSize];
    }

    void insert(int key) {
    size += 1;
    arr[size-1] = key; // Corrected array indexing
    int i = size-1;
    int temp;

    while (i > 0) { // Changed the condition to i > 0
        if (arr[i] > arr[(i-1)/2]) { // Corrected array indexing and comparison
            temp = arr[i];
            arr[i] = arr[(i-1)/2];
            arr[(i-1)/2] = temp;
            i = (i-1)/2;
        } else {
            break;
        }
    }
}

    int Delete() {
        int deletedValue = arr[0];
        arr[0] = arr[size-1];
        size--;
        int temp;
        int i = 0;
        int largest = i;

        while(i < size) {

            int left = i*2+1;
            int right = i*2+2;
            if(left < size && arr[largest] < arr[left]){
                largest = left;
            }
            if(right < size && arr[largest] < arr[right]){
                largest = right;
            }

            if(largest == i) {
                break;
            } else {
                temp = arr[largest];
                arr[largest] = arr[i];
                arr[i] = temp;
                i = largest;
            }  
        }
        return deletedValue;
    }
};




int main() {

    Heap h(9);

    // h.arr[0] = -1;
    // h.arr[1] = 100;
    // h.arr[2] = 50;
    // h.arr[3] = 60;
    // h.arr[4] = 40;
    // h.arr[5] = 45;

    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(40);
    h.insert(45);
    h.insert(53);
    h.insert(58);
    h.insert(20);
    h.insert(30);



    for(int i = 0; i<h.size; i++){
        std::cout<<h.arr[i]<<" ";
    } std::cout<<std::endl;

    // for(int i = 0; i<size; i++){
    //     std::cout<<h.arr[i]<<" ";
    // } std::cout<<std::endl;
    h.Delete();

    for(int i = 0; i<h.size; i++){
        std::cout<<h.arr[i]<<" ";
    } std::cout<<std::endl;

    return 0;
}