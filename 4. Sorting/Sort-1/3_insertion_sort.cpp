#include <iostream>
#include <climits>

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
void insertion_sort_asc(int arr[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j>0 && arr[j] < arr[j-1]){
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
}

//Descending Order
void insertion_sort_desc(int arr[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j>0 && arr[j] > arr[j-1]){
            swap(&arr[j], &arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {2,5,3,9,7};
    print_arr(arr, 5);
    
    insertion_sort_asc(arr, 5);
    print_arr(arr, 5);
}