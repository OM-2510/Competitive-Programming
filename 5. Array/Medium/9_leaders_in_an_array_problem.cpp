#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& nums) {
    int leader = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[leader]) {
            leader = i;
        }
    }
    std::vector<int> temp(nums.begin() + leader, nums.end());
    return temp;
}

int main() {
    std::vector<int> arr1 = {4, 7, 1, 0};
    std::vector<int> arr2 = {10, 22, 12, 3, 0, 6};

    std::vector<int> temp1 = leaders(arr1);
    std::vector<int> temp2 = leaders(arr2);

    for (int i : temp1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (int i : temp2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
