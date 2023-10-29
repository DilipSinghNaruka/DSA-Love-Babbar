#include<iostream>
using namespace std;

int swapp(int arr[], int size){
    for (int i = 0; i < size; i= i+2)
    {
    if (i+1 < size)
        {
        swap(arr[i], arr[i+1]);
        }

    }
    
}

int main(){
    int size = 6;
    int arr[size] = {1,2,3,4,5,6};
    cout<<"Before the swaping ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    swapp(arr,size);
    cout<<"After the swaping ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}