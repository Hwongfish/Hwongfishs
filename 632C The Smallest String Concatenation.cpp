/*
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
string s[50000 + 5];
int dp[1005][1005];
int len1, len2;
bool cmp(string a, string b) {
	return a + b < b + a;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i];
	sort(s + 1, s + n + 1, cmp);
	for (int i = 1; i <= n; i++)
		cout << s[i];
	return 0;
}
*/