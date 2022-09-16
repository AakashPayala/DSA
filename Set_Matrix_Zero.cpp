#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter n and  m:\n";
    int n, m;
    cin >> m >> n;
    cout << "enter " << m << "*" << n << " elements";
    int i, j;
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = -1;
                for (int k = 0; k < m; k++)
                {
                    if (a[i][k] != 0)
                        a[i][k] = -1;
                }
                for (int k = 0; k < n; k++)
                {
                    if (a[k][j] != 0)
                        a[k][j] = -1;
                }
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == -1)
                a[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
