#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 5;
    while(n>=0){
        if(n%2!=0){
            sum += n;
            cout<<n<<endl;}
        n--;

    }
    cout<<sum;
} 