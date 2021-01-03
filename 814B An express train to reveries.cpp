/*
algorithm #1 by Hwongfish
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int a[1005], b[1005], p[1005], n, j, q;
    while (cin >> n)
    {
        map<int, int>M;
        int z = 0, sum = 0, i1, i2;
        for (int i = 0; i <= n - 1; i++)
            cin >> a[i];
        for (int i = 0; i <= n - 1; i++)
            cin >> b[i];
        for (int i = 0; i <= n - 1; i++)
        {
            if (a[i] != b[i] && z == 1)
            {
                i2 = i;
                sum++;
            }
            if (a[i] != b[i] && z == 0)
            {
                z = 1;
                i1 = i;
                sum++;
            }
        }
        if (sum == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                for (j = 0; j <= n - 1; j++)
                {
                    if (i == a[j])
                        break;
                }
                if (j > n - 1)
                {
                    q = i;
                    break;
                }
            }
            for (int i = 0; i <= i1 - 1; i++)
                cout << a[i] << ' ';
            a[i1] = q;
            for (int i = i1; i <= n - 1; i++)
                cout << a[i] << ' ';
            cout << endl;
        }
        if (sum == 2)
        {
            for (int i = 0; i <= n - 1; i++)
            {
                if (i == i1 || i == i2)
                    i++;
                p[i] = a[i];
            }
            p[i1] = a[i1];
            p[i2] = b[i2];
            int zz = 1;
            for (int i = 0; i <= n - 1; i++)
            {
                M[p[i]]++;
                if (M[p[i]] >= 2)
                {
                    zz = 0;
                    break;
                }
            }
            if (zz == 0)
            {
                for (int i = 0; i <= n - 1; i++)
                {
                    if (i == i1)
                        cout << b[i1] << ' ';
                    else if (i == i2)
                        cout << a[i2] << ' ';
                    else
                        cout << a[i] << ' ';
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i <= n - 1; i++)
                    cout << p[i] << ' ';
                cout << endl;
            }
        }
    }
    return 0;
}
*/