#include <iostream>

void swap(int* a ,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_arr(int arr[], int n){
    std::cout<<"{";
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"}";
}

//Ascending Order
void bubble_sort_asc(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

//Descending Order
void bubble_sort_desc(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {2,5,3,9,7};
    print_arr(arr, 5);
    
    bubble_sort_asc(arr, 5);
    print_arr(arr, 5);
}