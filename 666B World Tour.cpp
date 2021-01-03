/*
algorithm #1 thinkby KSkun writeby Hwongfish
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
const int MAXN = 3005;
vector<int> gra[MAXN];
queue<int> que;
int n, m, ut, vt, dis[MAXN][MAXN], lf[MAXN][3], lt[MAXN][3];
bool vis[MAXN] = { 0 };
inline void updatef(int u, int v) {
    if (dis[u][v] == 0) return;
    if (dis[u][v] > dis[u][lf[u][0]]) {
        lf[u][2] = lf[u][1];
        lf[u][1] = lf[u][0];
        lf[u][0] = v;
    }
    else if (dis[u][v] > dis[u][lf[u][1]]) {
        lf[u][2] = lf[u][1];
        lf[u][1] = v;
    }
    else if (dis[u][v] > dis[u][lf[u][2]]) {
        lf[u][2] = v;
    }
}
inline void updatet(int u, int v) {
    if (dis[u][v] == 0) return;
    if (dis[u][v] > dis[lt[v][0]][v]) {
        lt[v][2] = lt[v][1];
        lt[v][1] = lt[v][0];
        lt[v][0] = u;
    }
    else if (dis[u][v] > dis[lt[v][1]][v]) {
        lt[v][2] = lt[v][1];
        lt[v][1] = u;
    }
    else if (dis[u][v] > dis[lt[v][2]][v]) {
        lt[v][2] = u;
    }
}
inline void bfs(int st) {
    memset(vis, 0, sizeof vis);
    dis[st][st] = 0;
    que.push(st);
    vis[st] = true;
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (int v : gra[u]) {
            if (!vis[v]) {
                dis[st][v] = dis[st][u] + 1;
                vis[v] = true;
                updatef(st, v);
                updatet(st, v);
                que.push(v);
            }
        }
    }
}
inline bool check(int a, int b, int c, int d) {
    return a != b && a != c && a != d && b != c && b != d && c != d && a != 0 && d != 0;
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &ut, &vt);
        gra[ut].push_back(vt);
    }
    for (int i = 1; i <= n; i++) bfs(i);
    int ans = 0, ansc[4];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || dis[i][j] == 0) continue;
            for (int k1 = 0; k1 < 3; k1++) {
                for (int k2 = 0; k2 < 3; k2++) {
                    if (!check(lt[i][k1], i, j, lf[j][k2])) continue;
                    if (dis[lt[i][k1]][i] + dis[i][j] + dis[j][lf[j][k2]] > ans) {
                        ans = dis[lt[i][k1]][i] + dis[i][j] + dis[j][lf[j][k2]];
                        ansc[0] = lt[i][k1];
                        ansc[1] = i;
                        ansc[2] = j;
                        ansc[3] = lf[j][k2];
                    }
                }
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", ansc[i]);
    }
    return 0;
}
*/