#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
        char ch = 'A' + i -1 +j -1;
        cout << ch << ' ';
        }
        cout << endl;
    }
}