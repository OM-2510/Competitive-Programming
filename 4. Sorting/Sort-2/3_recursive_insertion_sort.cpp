#include <iostream>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int i){
    while(i>0 && arr[i]<arr[i-1]){
            swap(&arr[i], &arr[i-1]);
            i--;
    }
}

void insertion_sort(int arr[], int i, int n){
    if(i>n){
        return;
    }

    sort(arr, i);
    insertion_sort(arr,i+1,n);
}

void print_arr(int arr[], int n){
    std::cout<<"{ ";
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"}"<<std::flush;
}

int main(){
    int arr[] = {9,2,5,3,7,1};
    insertion_sort(arr, 0, 5);
    print_arr(arr,6);
}