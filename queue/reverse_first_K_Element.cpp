#include<iostream>
#include<stack>
#include<queue>

void reverseK(std::queue<int> &q, int k) {


    std::stack<int> st;
    int n = q.size();
    int count = 0;

    if(k<0 || k>n) {
        std::cout<<"Enter valid arguments"<<std::endl;
        return;
    }

    if(k == 0) {
        return;
    }

    for(int i = 1; i <= k; i++) {
        int temp = q.front();
        q.pop();
        st.push(temp);
        count++;
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i = 0; i<n-k; i++) {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }


    //Printing the queue
    
    while(!q.empty()) {
        std::cout<<q.front()<<" ";
        q.pop();
    }
 
}

int main() {

std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseK(q, 5);

    return 0;
}