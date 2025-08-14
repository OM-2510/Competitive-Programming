#include <iostream>
#include <map>

int main(){
    //sample array input
    int arr[] ={10,5,10,15,10,5};
    std::map<int, int> mpp;
    
    for(int i : arr){
        mpp[i]++;
    }

    for(auto i: mpp){
        std::cout<<i.first<<"\t"<<i.second<<"\n";
    }
}