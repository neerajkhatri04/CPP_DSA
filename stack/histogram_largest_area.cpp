//Leetcode question no. 84

#include<iostream>
#include<stack>
#include<vector>

std::vector<int> prevSmallerElem(std::vector<int> &input) {
    std::stack<int> st;
    st.push(-1);
    std::vector<int> ans(input.size());

    for(int i = 0; i<input.size(); i++) {
        while(st.top()!= -1 && input[st.top()]>=input[i]) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

std::vector<int> nextSmallerElem(std::vector<int> &input) {
    std::stack<int> st;
    st.push(-1);
    std::vector<int> ans(input.size());

    for(int i = input.size()-1; i>=0; i--) {
        while(st.top()!=-1 && input[st.top()]>=input[i]) {
            st.pop();
        }
        if(st.top() == -1) {
            ans[i] = input.size();
        } else {
            ans[i] = st.top();
        }
        
        st.push(i);
    }
    return ans;
}

int largestArea(std::vector<int> &input) {
    
    std::vector<int> p = prevSmallerElem(input);
    std::vector<int> n = nextSmallerElem(input);
    int maxArea = INT_MIN;

    for(int i = 0; i<input.size(); i++) {
        int length = input[i];
        int width = n[i] - p[i] - 1;
        int area = length*width;
        maxArea = std::max(area, maxArea);
    }
    return maxArea;
}


int main() {

    std::vector<int> v;
    v.push_back(1);
    v.push_back(1);

    std::cout<<largestArea(v);

    return 0;
}