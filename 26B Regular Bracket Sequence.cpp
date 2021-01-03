/*
https://codeforces.com/problemset/problem/26/B
algorithm #1 cn.Hwongfish
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 1000000;
int main()
{
    const char s[N] = { 0 };
    scanf("%s", s);
    int len = strlen(s);
    int l = 0, r = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
            l++;
        if (s[i] == ')' && l > 0)
        {
            l--;
            r++;
        }
    }
    printf("%d\n", r * 2);
    return 0;
}
algorithm #2(BEST!) cn.Hwongfish
#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> a[40000] = { make_pair(0, 0) };
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