#include<iostream>
#include<stack>
#include<queue>

//Can also be done using stack-----> Just push each element of Q in stack then pop from the stack

void reverseQ(std::queue<int> &q) {

    if(q.empty()) {
        return;
    }

    int element = q.front();
    q.pop();

    reverseQ(q);

    q.push(element);
    
}


int main(){

    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseQ(q);

    while(!q.empty()) {
        std::cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}