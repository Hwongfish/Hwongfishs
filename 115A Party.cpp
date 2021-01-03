/*
algorithm #1 by Hwongfish
#include <cstdio>
#include <algorithm>
using namespace std;
const int N = 2000;
int father[N];
int find(int x)
{
    int cnt = 0;
    while (x != -1)
        x = father[x], cnt++;
    return cnt;
}
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &father[i]);
    for (int i = 1; i <= n; i++)
        ans = max(ans, find(i));
    printf("%d\n", ans);
    return 0;
}
*/