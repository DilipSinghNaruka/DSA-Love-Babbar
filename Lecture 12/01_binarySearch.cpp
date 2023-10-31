#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid= (start+end)/2;

    while(start<=end){
        if (key==arr[mid])
        {
            return mid;
        }else if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int size = 5;
    int arr[size] ={2,3,4,6,9};
    int key = 9;
    cout<<binarySearch(arr,size,key);

}