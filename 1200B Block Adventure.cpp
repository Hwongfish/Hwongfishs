/*
algorithm #1 cn.Hwongfish
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1e3 + 10;
typedef long long int ll;
ll h[maxn] = { 0 };
ll n, m, k;
int main()
{
    ll t;
    scanf("%I64d", &t);
    while (t--)
    {
        bool flag = true;
        scanf("%I64d%I64d%I64d", &n, &m, &k);
        for (int i = 0; i < n; i++)
            scanf("%I64d", &h[i]);
        for (int i = 0; i < n - 1; i++)
        {
            if (h[i + 1] > h[i] + k)
            {
                m -= h[i + 1] - h[i] - k;
                if (m < 0)
                    flag = false;
            }
            else
            {
                m += h[i] - max((long long)0, (h[i + 1] - k));
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
*/