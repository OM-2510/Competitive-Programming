#include <iostream>

void swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int part(int arr[], int low, int high){
    int i = low + 1;
    int j = high;
    int pivot_index = low;
    
    while(i<=j){
        while(i<=high && arr[pivot_index] > arr[i]){
            i++;
        }

        while(j>=low && arr[pivot_index] < arr[j]){
            j--;
        }
        if(i<j){
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    swap(&arr[pivot_index],&arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high){
    if(low>=high){
        return;
    }

    int pivot_index = part(arr, low, high);
    
    quick_sort(arr, low, pivot_index-1);
    quick_sort(arr, pivot_index+1, high);
}

void print_arr(int arr[], int n){
    std::cout<<"{ ";
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"}"<<std::flush;
}

int main(){
    int arr[] = {7,2,9,3,1,5};
    quick_sort(arr, 0, 5);
    print_arr(arr, 6);
}