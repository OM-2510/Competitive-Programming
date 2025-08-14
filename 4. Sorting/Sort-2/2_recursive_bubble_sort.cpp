#include <iostream>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void cont_swap(int arr[], int l, int r){
    for(int i=l; i<r; i++){
        if(arr[i]>arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }
}

void bubble_sort(int arr[], int l, int r){
    if(l>=r){
        return;
    }

    cont_swap(arr,l,r);
    bubble_sort(arr,l,r-1);
}

void print_arr(int arr[], int n){
    std::cout<<"{ ";
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"}"<<std::endl;
}

int main(){
    std::cout<<"Working"<<std::endl;
    int arr[] = {9,2,5,3,7,1};
    bubble_sort(arr, 0, 5);
    print_arr(arr,6);
}