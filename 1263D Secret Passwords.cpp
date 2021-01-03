// - 1263D Secret Passwords.cpp
// - Hwongfish_2020.11.29_vs2010
/*
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 30, inf = 0x3f3f3f3f;
int f[N] = { 0 };
bool c[N] = { 0 };
int n = 0, ans = 0;
int find(int x)
{
	if (f[x] == x)return x;
	return f[x] = find(f[x]);
}
inline void uni(int x, int y)
{
	f[find(x)] = find(y);
}
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= 26; ++i)
		f[i] = i;
	for (int i = 1; i <= n; ++i) {
		char s[60] = { 0 };
		scanf("%s", s + 1);
		int len = strlen(s + 1);
		c[s[1] - 'a' + 1] = 1;
		for (int j = 1; j < len; ++j) {
			int x = s[j] - 'a' + 1, y = s[j + 1] - 'a' + 1;
			uni(x, y);
			c[x] = c[y] = 1;
		}
	}
	for (int i = 1; i <= 26; ++i)
		if (f[i] == i && c[i])ans++;
	printf("%d\n", ans);
	return 0;
}
*/