/*
https://codeforces.com/problemset/problem/493/C
algorithm #1 cn.Hwongfish
#include<cstdio>
#include<algorithm>
using namespace std;
int read()
{
    int x = 0, f = 1; char ch = getchar();
    while (ch < '0' || ch>'9') { if (ch == '-')f = -1; ch = getchar(); }
    while (ch >= '0' && ch <= '9') { x = x * 10 + ch - '0'; ch = getchar(); }
    return x * f;
}
int t1, t2;
int l1, l2;
int n, m, ans, ans1, ans2;
int a[200005], b[200005], c[400005];
int main()
{
    n = read();
    for (int i = 1; i <= n; i++)a[i] = read(), c[i] = a[i];
    sort(a + 1, a + n + 1);
    m = read();
    for (int i = 1; i <= m; i++)b[i] = read(), c[i + n] = b[i];
    sort(b + 1, b + m + 1);
    sort(c + 1, c + n + m + 1);
    ans1 = n * 3; ans2 = m * 3;
    ans = (ans1 - ans2);
    l1 = l2 = 0;
    for (int i = 1; i <= n + m; i++)
    {
        while (l1 != n && a[l1 + 1] <= c[i])l1++;
        while (l2 != m && b[l2 + 1] <= c[i])l2++;
        t1 = l1 * 2 + (n - l1) * 3, t2 = l2 * 2 + (m - l2) * 3;
        if (t1 - t2 > ans || (t1 - t2 == ans && t1 > ans1))ans = t1 - t2, ans1 = t1, ans2 = t2;
    }
    printf("%d:%d\n", ans1, ans2);
    return 0;
}
algorithm #2 cn.Hwongfish
#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> a[500000] = { make_pair(0, 0) };
int n = 0, m = 0;
int x = 0, y = 0, mx = 0, my = 0;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i].first, a[i].second = 0;
    cin >> m;
    for (int i = n; i < m + n; ++i)
        cin >> a[i].first, a[i].second = 1;
    sort(a, a + n + m);
    x = n * 3; y = m * 3;
    mx = x; my = y;
    for (int i = 0; i < n + m; ++i) {
        if (a[i].second == 0)x--;
        else y--;
        if (x - y > mx - my)
            mx = x, my = y;
    }
    printf("%d:%d\n", mx, my);
}
*/