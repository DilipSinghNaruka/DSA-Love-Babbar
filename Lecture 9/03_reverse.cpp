#include<iostream>
using namespace std;

int reverse(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i<j){
        swap(arr[i++], arr[j--]);
    }
    
}

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    cout<<"Before the reversing Array :)"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,size);
    cout << "After the reversing Array :)"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}