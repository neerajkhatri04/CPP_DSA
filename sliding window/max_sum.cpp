//Print max sum in given window of sub array.

#include<iostream>


void maxSumInK(int arr[], int n, int k) {

    int sum = 0;
    int maxSum = INT_MIN;
    int i = 0, j = 0;
    if(k>n || k<=0) return;
    while(j<n) {
        sum = sum + arr[j];
        

        if(j-i+1 == k) {
            maxSum = std::max(maxSum, sum);
            sum = sum - arr[i];
            i++;
        }
        j++;
    }
    std::cout<<"Max sum in given window is: "<<maxSum;
}

int main() {

    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    maxSumInK(arr, n, k);

    return 0;
}