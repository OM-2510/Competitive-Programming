#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int longestSubarray(std::vector<int> vec, int target){
    std::unordered_map<int, int> array;
    for(int i=0; i<vec.size(); i++){
        if(array.back() == target){
            return 
        }
    }



}


int main(){
    std::vector <int> arr = {10,5,2,7,1,9};
    int target = 15;
    std::cout<<longestSubarray(arr, target);

}