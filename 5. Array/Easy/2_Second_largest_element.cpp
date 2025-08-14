#include <iostream>
#include <climits>

int sec_largest(int arr[], int n){
    int largest = arr[0];
    int sec_lar = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            if(largest != sec_lar){
                sec_lar = largest;
            }
            
            largest = arr[i];
        }

        else if(arr[i]<largest && arr[i]>sec_lar){
            sec_lar =  arr[i];
        }
    }
    return sec_lar;
}

int main(){
    int arr[] = {1,2,4,7,7,5};
    std::cout<<sec_largest(arr, 6)<<std::endl;
}