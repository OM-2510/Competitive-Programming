#include <iostream>
#include <vector>

using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> nums;
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            if (nums.size()==0 || nums.back()!=nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;    
        }

        else if (nums1[i] == nums2[j]) {
            if (nums.size()==0 || nums.back()!=nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;
            j++;
        }

        else {
            if (nums.size()==0 || nums.back()!=nums2[j]){
                nums.push_back(nums2[j]);
            }
            j++;    
        }
    }

    while(i < nums1.size()) {
        if(nums.size()==0 || nums.back()!=nums1[i]){
            nums.push_back(nums1[i]);
        }
        i++;
    }

    while(j < nums2.size()) {
        if(nums.size()==0 || nums.back()!=nums2[j]){
            nums.push_back(nums2[j]);
        }
        j++;
    }

    return nums;
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {3,4,5,6,9};

    vector<int> arr3 = {1, 2, 2, 3};
    vector<int> arr4 = {2, 2, 3, 4};

    vector<int> new_arr = unionArray(arr3, arr4);
    
    for(int i: new_arr){
        cout<<i<<" ";
    }

    return 0;
}