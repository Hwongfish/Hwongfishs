/*
* algorithm #1 Hwongfish
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

#define ll long long
using namespace std;

const int MAXN = 131075;
int n;
char s[MAXN];
int getans(int l, int r, char c) {
	if (l == r) return s[l] != c;
	int tot1 = 0, tot2 = 0;
	int mid = (l + r) >> 1;
	for (int i = l; i <= mid; i++) if (s[i] != c) tot1++;
	for (int i = mid + 1; i <= r; i++) if (s[i] != c) tot2++;
	tot1 += getans(mid + 1, r, c + 1);
	tot2 += getans(l, mid, c + 1);
	return min(tot1, tot2);
}
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		scanf("%s", s + 1);
		printf("%d\n", getans(1, n, 'a'));
	}
}
*/