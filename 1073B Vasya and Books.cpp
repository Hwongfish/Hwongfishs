/*
algorithm#1 by Hwongfish
#include<iostream>
using namespace std;
const int N = 2e5 + 10;
int a[N], b[N], v[N], w[N];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[b[i]]) continue;
        while (1)
        {
            w[i]++; v[a[j++]]++;
            if (v[b[i]]) break;
        }

    }
    for (int i = 0; i < n; i++)
        printf("%d ", w[i]);
}
*/