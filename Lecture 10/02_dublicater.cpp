#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1,2,3,3};
    int ans= 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans^arr[i];
        cout<<ans<<endl;
    }
}