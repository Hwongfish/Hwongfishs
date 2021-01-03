/*
* algorithm #1 Hwongfish
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 105;
int f[N], to[N], d[N];
int find(int x) {
	if (f[x] != x) f[x] = find(f[x]);
	return f[x];
}
void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y) f[x] = y;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		f[i] = i;
		scanf("%d", &to[i]);
	}
	for (int i = 1; i <= n; i++) {
		scanf("%d", &d[i]);
		if (i - d[i] > 0) merge(i, i - d[i]);
		if (i + d[i] <= n) merge(i, i + d[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (find(i) == find(to[i])) continue;
		puts("NO");
		return 0;
	}
	puts("YES");
	return 0;
}
*/