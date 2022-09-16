#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter decimal number :" << endl;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            s = "0" + s;
        }
        else
        {
            s = "1" + s;
        }
        n /= 2;
    }
    cout << s << endl;
    return 0;
}