#include <iostream>
#include <vector>
#include <map>

void two_sum(std::vector<int> vec, int target){
    int n = vec.size();
    std::map<int, int> mpp;

    std::cout<<"{";

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(vec[i]+vec[j] == target){
                
            }
        }
    }
    std::cout<<"}";
}

int main(){
    std::vector<int> arr = {2,6,5,8,11};
    int target = 14;
    two_sum(arr, target);
}