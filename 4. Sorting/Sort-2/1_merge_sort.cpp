#include <iostream>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr[], int l, int mid, int r){
    int new_arr[r-l+1];
    int i = 0;
    int low = l;
    int m = mid+1;

    while(l<=mid && m<=r){      //copy all the elements till the if holds true
        if (arr[l]<arr[m]) {
            new_arr[i++] = arr[l++];
        } else {
            new_arr[i++] = arr[m++];
        }    
    }

    while(l<=mid){             //remaining elements are copied 
        new_arr[i++] = arr[l++];
    }

    while(m<=r){
        new_arr[i++] = arr[m++];
    }

    for(int i=0; i<=r-low; i++){
        arr[i+low] = new_arr[i];
    }

}

void merge_sort(int arr[], int l, int r){   //Make the recursion tree for it
    int mid = (l+r)/2;
    if(l>=r){
        return;
    }

    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr,l,mid,r);

}

void print_arr(int arr[], int n){
    std::cout<<"{ ";
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"}"<<std::endl;
}

int main(){
    int arr[]={2,5,9,3,4,1};
    merge_sort(arr,0,5);
    print_arr(arr,6);
}