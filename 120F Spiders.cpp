/*
* algorithm by Hwongfish
#include<cstdio>
#include<cstring>
using namespace std;
int T, n, s, len, ans;
int dis[105];
struct graph
{
	int tot, hd[105], nxt[205], to[205];
	void add(int u, int v)
	{
		tot++;
		nxt[tot] = hd[u];
		hd[u] = tot;
		to[tot] = v;
	}
	void clear()
	{
		tot = 0;
		memset(hd, 0, sizeof(hd));
	}
}g;
void dfs(int now, int ll)
{
	dis[now] = ll;
	for (int i = g.hd[now]; i; i = g.nxt[i])
		if (dis[g.to[i]] == 0) dfs(g.to[i], ll + 1);
	return;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		g.clear();
		for (int i = 1; i < n; i++)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			g.add(u, v);
			g.add(v, u);
		}
		s = 0, len = 0;
		memset(dis, 0, sizeof(dis));
		dfs(1, 1);
		for (int i = 1; i <= n; i++)
			if (dis[i] > dis[s]) s = i;
		memset(dis, 0, sizeof(dis));
		dfs(s, 1);
		for (int i = 1; i <= n; i++)
			if (dis[i] > len) len = dis[i];
		ans += len - 1;
	}
	printf("%d\n", ans);
	return 0;
}
*/