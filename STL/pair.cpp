#include<bits/stdc++.h>

int main() {
    
    std::pair<int, int> p = {1, 2};
    std::cout <<"first-"<< p.first << " " <<"second-"<< p.second << std::endl;
 
    std::pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    std::cout <<"first-"<< arr[0].first << " " <<"second-"<< arr[0].second << std::endl;
    std::cout <<"first-"<< arr[1].first << " " <<"second-"<< arr[1].second << std::endl;
    std::cout <<"first-"<< arr[2].first << " " <<"second-"<< arr[2].second << std::endl;
    return 0;
}