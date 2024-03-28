#include<iostream>
#include<vector>
#include<stack>



std::vector<int> nextSmallerElem(std::vector<int> &v) {
    
     std::stack<int> st;
     st.push(-1);
     std::vector<int> ans(v.size());
     for(int i = v.size()-1; i>=0; i--) {
        
        while(st.top()>v[i]) {
            st.pop();
            }

            ans[i] = st.top();
            st.push(v[i]);
       
     }
     return ans;
}

std::vector<int> prevSmallerElem(std::vector<int> &v) {
    std::stack<int> st;
    st.push(-1);
    std::vector<int> ans(v.size());

    for(int i = 0; i<v.size(); i++) {

        while(st.top()>v[i]) {
            st.pop();
        }

        ans[i] = st.top();
        st.push(v[i]);

    }

    return ans;
}

int main() {
    std::vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    std::vector<int> ans1 = nextSmallerElem(v);
    std::vector<int> ans2 = prevSmallerElem(v);

    std::cout<<"First next smaller elements of (1 4 3 2)"<<std::endl;

    for(int i = 0; i < v.size(); i++) {
        std::cout<<ans1[i]<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"First previous smaller elements of (1 4 3 2)"<<std::endl;

    for(int i = 0; i < v.size(); i++) {
        std::cout<<ans2[i]<<" ";
    }

    return 0;
}