#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "enter the size of the array :\n";
    cin >> n;
    int a[n];
    cout << " enter your array :\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; ++i)
    {
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
    cout << "sorted array :";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << a[i];
    }
    return 0;
}