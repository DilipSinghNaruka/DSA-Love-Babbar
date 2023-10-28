#include<iostream>
using namespace std;

int search(int arr[], int size, int k){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==k){
            return i+1;
        }
    }
        return -1;
    
}

int main(){
    int size = 5;
    int arr[size]={2,3,4,5,6};
    int k = 5;
    cout<<"The Position of k :) "<<search(arr,size,k);
}