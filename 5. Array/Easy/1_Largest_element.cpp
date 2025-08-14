#include <iostream>
#include <climits>


int largest_el(int arr[], int n){
    int max = INT_MIN;
    int i = 0;
    while(i<=n/2){
        if(arr[i]>=arr[n]){
            if(arr[i]>max){
                max = arr[i];
            }
        }

        else{
            if(arr[n]>max){
                max = arr[n];
            }
        }

        i++;
        n--;
    }
    return max;
}


int main(){
    int arr[] = {3,7,1,5,9,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Largest Element: "<<largest_el(arr, size-1)<<std::endl;
}

