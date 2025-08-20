#include <iostream>
#include <vector>
#include <climits>

int maxSubArray(std::vector<int>& nums) {
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int curr_l = 0;
    int l = 0;
    int r = 0;
    
    for(int i = 0; i<nums.size(); i++){
        curr_sum += nums[i];
        //max function
        if(curr_sum>max_sum) {
            max_sum = curr_sum;
            l = curr_l;
            r = i;
            
        }

        if (curr_sum < 0){
            curr_sum = 0;
            curr_l = i + 1;
        }

    }
    
    //print subarray
    std::cout<<"{ ";
    while(l<=r){
        std::cout<<nums[l++]<<" ";
    }
    std::cout<<"}"<<std::endl;
    return max_sum;
}

int main(){
    std::vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    // std::vector<int> arr = {-1, -2};
    std::cout<<"Sum: "<<maxSubArray(arr);
}