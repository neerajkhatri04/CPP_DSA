//Print first negative element in each subarray of given window length.

#include<iostream>
#include<queue>
void firstNegative(int arr[], int n, int k) {
    
    std::queue<int> q;
    int i = 0, j = 0;

    while(j<n) {

            if(arr[j]<0 && j-i+1<k) {
            q.push(arr[j]);
            }
   
            if(k == j-i+1) {

            if(arr[j]<0)  q.push(arr[j]);

            if(q.empty()) std::cout<<0<<" ";

            if(!q.empty()) std::cout<<q.front()<<" ";

            
            if(arr[i]<0) q.pop();

            i++;
        }

        j++;
    }

}

int main() {

    int arr[] = {1,-2,-3,4,6,-5,7,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    firstNegative(arr, n, k);

    return 0;
}