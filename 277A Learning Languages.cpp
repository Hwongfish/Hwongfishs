/*
* algorithm #1 by Hwongfish
#include<iostream>
#include<vector>
using namespace std;
const int N = 110;
int n = 0, m = 0, s = 0;
bool d[2 * N] = { 0 }, dd;
vector<int>k[2 * N];
int dfs(int x)
{
    d[x] = 1;
    int i;
    for (int i = 0; i < k[x].size(); i++)if (!d[k[x][i]])dfs(k[x][i]);
    return 0;
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        int x = 0, y = 0;
        scanf("%d", &x);
        while (x--)
        {
            scanf("%d", &y);
            k[i].push_back(100 + y);
            k[100 + y].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!d[i]) { if (k[i].size() >= 1)dd = 1; s++; dfs(i); }
    }
    if (dd)s--;
    printf("%d", s);
}
*/