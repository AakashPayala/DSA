#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "enter a decimal no \n";
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        cout<<bit<<endl;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "your ans is : " << ans << "\n";

    return 0;
}