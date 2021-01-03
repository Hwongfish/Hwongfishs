// - 1462C Unique Number.cpp
// - 2020.12.20_Hwongfish_VIM
/*
* algorithm #1
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 50;
int t = 0, n = 0;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n > 45) {
			printf("-1\n");
			continue;
		}
		int ans = 0, p = 0;
		for (int i = 9; i > 0 && n >= i; --i)
			n -= i, ans += pow(10, p++) * i;
		ans += pow(10, p) * n;
		printf("%d\n", ans);
	}
	return 0;
}
*/