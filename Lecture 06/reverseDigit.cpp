#include <iostream>
using namespace std;

int pow(int x, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    // while (n != 0)
    // {
    //     int bit = n % 10;
    //     ans = (bit * pow(10, i)) + ans;
    //     cout<<"sum"<<ans<<endl;
    //     n = n / 10;
    //     i++;
    // }
    pow(n,i);
    cout << ans;
}
