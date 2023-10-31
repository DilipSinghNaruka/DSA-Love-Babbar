#include<iostream>
using namespace std;
int maxi(int arr[], int size){
    int ans = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(ans<=arr[i]){
            ans= arr[i];
        }
    }
    return ans;
    

}
using namespace std;
int mini(int arr[], int size){
    int ans = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (ans >= arr[i])
        {
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int size = 5;
    int arr[size] = {1,2,5,33,0};
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"This is Maxi:- "<<maxi(arr,size)<<endl;
    cout<<"This is Mini:- "<<mini(arr,size)<<endl;

}