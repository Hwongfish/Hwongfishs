/*
* algorithm #1 Hwongfish
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef pair <int, int> pin;

const int N = 2e5 + 5;

int n, res, tot = 0, head[N], dep[N], fir[N], sec[N];
pin mx(0, 0);

struct Edge {
    int to, nxt;
} e[N << 1];

inline void add(int from, int to) {
    e[++tot].to = to;
    e[tot].nxt = head[from];
    head[from] = tot;
}

inline void read(int& X) {
    X = 0; char ch = 0; int op = 1;
    for (; ch > '9' || ch < '0'; ch = getchar())
        if (ch == '-') op = -1;
    for (; ch >= '0' && ch <= '9'; ch = getchar())
        X = (X << 3) + (X << 1) + ch - 48;
    X *= op;
}

void dfs(int x, int fat, int depth) {
    dep[x] = depth;
    int son = 0;
    for (int i = head[x]; i; i = e[i].nxt) {
        int y = e[i].to;
        if (y == fat) continue;
        dfs(y, x, depth + 1);
        ++son;
        if (dep[fir[y]] > dep[fir[x]])
            sec[x] = fir[x], fir[x] = fir[y];
        else if (dep[fir[y]] > dep[sec[x]]) sec[x] = fir[y];
    }

    if (!son) fir[x] = x;
    if (son >= 2) {
        pin tmp = pin(dep[x], dep[fir[x]] + dep[sec[x]]);
        if (tmp > mx) mx = tmp, res = x;
    }
}

int main() {
    read(n);
    for (int x, y, i = 1; i < n; i++) {
        read(x), read(y);
        add(x, y), add(y, x);
    }

    dfs(1, 0, 1);
    int ans1 = fir[res], ans2 = sec[res];

    mx = pin(0, 0);
    memset(fir, 0, sizeof(fir));
    memset(sec, 0, sizeof(sec));
    dfs(res, 0, 1);
    int ans3 = fir[res], ans4 = sec[res];

    printf("%d %d\n%d %d\n", ans1, ans3, ans2, ans4);
    return 0;
}
*/