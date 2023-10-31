#include<iostream>
using namespace std;

int power(int n, int j){
    int ans = 1;
    for(int i = 1; i<=j;i++){ 
        ans = ans*n;
    }
    return ans;
}
int main(){
    int n, j;
    cout<<"Enter number and power"<<endl;
    cin>>n>>j;
    cout<<power(n,j);
}
