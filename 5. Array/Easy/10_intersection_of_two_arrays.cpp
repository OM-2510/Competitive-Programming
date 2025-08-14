#include <iostream>
#include <vector>

using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> nums;
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
                i++;
        }

        else if (nums1[i] == nums2[j]) {
            nums.push_back(nums1[i]);
                i++;
                j++;
        }

        else if(nums1[i] > nums2[j]){
                j++;
        }
    }

    return nums;
}

int main() {
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {3,4,5,6,9};
    vector<int> new_arr = intersectionArray(arr1, arr2);
    
    for(int i: new_arr){
        cout<<i<<" ";
    }

    return 0;
}