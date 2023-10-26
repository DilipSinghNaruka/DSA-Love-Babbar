#include<iostream>
using namespace std;

int main(){
    char ch ;
    cin>>ch;
    if(ch >= 'A' && ch<='Z'){
        cout<<"this is capital";
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << "this is small";
    }else{
        cout<<"this is number ";
    }
}