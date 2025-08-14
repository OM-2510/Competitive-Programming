#include <iostream>

void left_rotate_by_one(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}   

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    left_rotate_by_one(arr, 7);
    for(int i: arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}