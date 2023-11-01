#include<iostream>
using namespace std;

int firstOcc(int arr[] , int size, int key){
    int start = 0;
    int end= size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }else if(arr[mid]<key){
            start = mid+1;

        }else{
            end = mid-1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int LastOcc(int arr[] , int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int size = 5;
    int arr[size] = {2,3,4,4,14};
    int key = 4;
    cout <<"First Occ indexing is :) " <<firstOcc(arr,size,key)<<endl;
    cout << "last Occ indexing is :) " << LastOcc(arr, size, key)<<endl;
}