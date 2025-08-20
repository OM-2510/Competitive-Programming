#include <iostream>
#include <vector>
#include <algorithm>

int longestSubarray(std::vector<int> vec, int target){
    int i=0;
    int j=0;
    int sum=0;
    int max_count = 0;
    
    for(int j=0; j<vec.size(); j++){
        sum+=vec[j];

        while(i<=j && sum>target){
            sum-=vec[i++];
        }

        if(target == sum){
            max_count = std::max(j-i+1, max_count);
        }
    }
    
    return max_count;
}


int main(){
    std::vector <int> arr = {10,5,2,7,1,9};
    int target = 15;
    std::cout<<longestSubarray(arr, target);

}