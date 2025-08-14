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
void selection_sort_asc(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

//Descending Order
void selection_sort_desc(int arr[], int n){
    for(int i = n-1; i>0; i--){
        int min = i;
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

int main(){
    int arr[] = {2,5,3,9,7};
    print_arr(arr, 5);
    
    selection_sort_desc(arr, 5);
    print_arr(arr, 5);
}