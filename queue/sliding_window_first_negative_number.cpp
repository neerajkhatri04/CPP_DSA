#include<iostream>

//Brute force
void firstNegativeNumberByBruteForce(int arr[], int n, int k) {

    bool flag;

    for(int i = 0; i<n-k+1 ; i++) {
        flag = false;
        for(int j = i; j<k+i; j++) {
            if(arr[j] < 0) {
                std::cout<<arr[j]<<" ";
                flag = true;
                break;
            }
        }
        if(!flag) std::cout<<0<<" ";
    }

}

//Using Queue

void firstNegativeNumber(int arr[], int n, int k){


}

int main() {

    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    firstNegativeNumberByBruteForce(arr, n, k);



    return 0;
}