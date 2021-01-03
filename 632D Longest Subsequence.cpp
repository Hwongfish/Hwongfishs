// - 632D Longest Subsequence.cpp
// - 2020.12.27_Hwongfish_vs2019
/*
* TIME_LIMIT_EXCEEDED
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1000010;
int n = 0, m = 0;
int a[N] = { 0 };
int each[N] = { 0 }, max_each = 0, max_one = 0;
vector<int> which[N];
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%d", a + i);
		if (a[i] > m)
			a[i] = 0;
	}
	for (int i = 1; i <= m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[j] != 0) {
				if (i % a[j] == 0) {
					each[i]++;
					which[i].push_back(j);
				}
			}
		}
		if (each[i] > max_each)max_each = each[i], max_one = i;
	}
	if (max_one == 0 && max_each == 0)
		max_one = 1;
	printf("%d %d\n", max_one, max_each);
	for (int i = 0; i < max_each; ++i)
		printf("%d ", which[max_one][i] + 1);
	return 0;
}
*/
/*
* algorithm #1
#include<cstdio>
#include<algorithm>
const int N = 1e6 + 5;
const int M = 1e6 + 5;
using namespace std;
int n = 0, m = 0;
int a[N] = { 0 }, b[N] = { 0 }, cnt[M] = { 0 }, t[M] = { 0 };
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]), b[i] = a[i];
	for (int i = 1; i <= n; ++i)
		if (a[i] <= m) ++cnt[a[i]];
	sort(b + 1, b + n + 1);
	int p = unique(b + 1, b + n + 1) - b - 1;
	for (int i = 1; i <= p && b[i] <= m; ++i){
		int x = b[i];
		for (int j = x; j <= m; j += x){
			t[j] += cnt[x];
		}
	}
	int ans = t[1], maxt = 1;
	for (int i = 2; i <= m; ++i)
		if (t[i] > ans)	ans = t[i], maxt = i;
	printf("%d %d\n", maxt, ans);
	for (int i = 1; i <= n; ++i)
		if (maxt % a[i] == 0)
			printf("%d ", i);
	return 0;
}
*/