#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<~a<<endl;
    cout<<"a^b "<<(a^b)<<endl;
}

// 1. 4&6 = 
//          4 = 100
//          6 = 110
        //    = 100 = 4

// 2.
             // 4 = 100
//              6 = 110
//              = 110 = 6


// 3.
             // 4 = 100
//              6 = 110
//              = 010 = 2


