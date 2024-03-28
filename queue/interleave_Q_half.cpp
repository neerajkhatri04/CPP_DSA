//  [1,2,3,4,5,6,7,8,9,10] = [1,6,2,7,3,8,4,9,5,10]

#include<iostream>
#include<queue>

void interLeaveQ(std::queue<int> &q) {

    std::queue<int> firstHalf;
    std::queue<int>::size_type size = q.size();

    int k = size/2;
    int count = 0;

    while(count != k) {
        int temp = q.front();
        firstHalf.push(temp);
        q.pop();
        count++;
    }

    while (!firstHalf.empty()) {
            q.push(firstHalf.front());
            firstHalf.pop();

            q.push(q.front());
            q.pop();
    }

    if(size&1){
        q.push(q.front());
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
    //q.push(6);

    interLeaveQ(q);

    while(!q.empty()) {
        std::cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}