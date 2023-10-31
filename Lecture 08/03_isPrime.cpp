#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return true;
            break;
        }

    }
        return false;
    
}

int main(){
    int n = 171;
    if (isPrime(n)){
        cout<<"this is not prime";
    }else{
        cout<<"this is prime";
    }
    

}