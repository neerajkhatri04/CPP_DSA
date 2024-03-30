#include<bits/stdc++.h>

int main() {
    
    std::unordered_set <int> s;

    for(int i = 0; i<40; i++) {
        if(i%2 == 0)
            s.insert(i);
    }

    std::cout<<"Elements present in the unordered set are: ";

    for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << * it << " ";
    }


    std::cout<<std::endl;

    if(!s.empty()) {
        std::cout<<"Elements present in the unordered set";
    } else {
        std::cout<<"No elements present in the unordered set";
    }
    std::cout<<std::endl;

    s.erase(s.begin(), s.end());
    std::cout<<"After erasing from begon to end";
    std::cout<<std::endl;

    if(!s.empty()) {
        std::cout<<"Elements present in the unordered set";
    } else {
        std::cout<<"No elements present in the unordered set";
    }



    return 0;
}