#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 4; i++)
    {
        char ch = 'A'+i-1;
        for (int j = i; j > 0; j--)
        {
            cout << ch  << ' ';
        }
        cout << endl;
    }
}