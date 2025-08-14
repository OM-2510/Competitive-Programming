#include <iostream>
#include <vector>

void disp (std::vector<int> vec) {
    std::cout<<"{";
    for(int i: vec){       //Printing the vector
        std::cout<<i<<" ";
    }
    std::cout<<"}"<<std::endl;
}

void rotate (std::vector<int>& nums, int k) {
    // disp(nums);
    int n = nums.size();    //make it n-1 in leetcode ide
    // std::cout<<n<<std::endl;
    int d = k % n;
    std::vector<int> temp(nums.end()-d, nums.end());
    // disp(temp);
    
    for(int i=n; i>=d; i--){ //Shifting
        nums[i] = nums[i-d];
        disp(nums);
    }
    // std::cout<<"Shifting Done"<<std::endl;

    for(int i=0; i<d; i++){ //Subtitution
        nums[i] = temp[i];
        disp(nums);
    }
    // std::cout<<"Substitution Done"<<std::endl;
}

int main(){
    std::vector <int> arr = {1,2,3,4,5,6,7};
    rotate(arr, 3);

    disp(arr);
}
