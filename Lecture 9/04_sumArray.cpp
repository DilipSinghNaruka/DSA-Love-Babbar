#include <iostream>
using namespace std;

int Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum +=arr[i]; 
    }
    return sum;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "The Sum of Array :) " << Sum(arr, size);
}