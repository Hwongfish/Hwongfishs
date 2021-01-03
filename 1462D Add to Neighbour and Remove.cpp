// - 1462D Add to Neighbour and Remove.cpp
// - 2020.12.27_Hwongfish_vs2019
/*
* algorithm #1
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 3000;
int t = 0;
int get_factors(int sum, vector<int>& factors) {
	for (int i = 1; i * i <= sum; ++i)
		if (sum % i == 0)
			factors.push_back(i), factors.push_back(sum / i);
	return 0;
}
int main() {
	scanf("%d", &t);
	while (t--) {
		vector<int>factors;
		int n = 0, a[N] = { 0 };
		int sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", a + i), sum += a[i];
		get_factors(sum, factors);
		sort(factors.begin(), factors.end());
		for (int i = 0; i < factors.size(); ++i) {
			int p = 0, ans = 0;
			while (p < n) {
				int j = 0, tp = 0;
				for (j = 0; j < factors[i] && p + tp <= n; j += a[p + tp++]);
				if (j > factors[i])break;
				else ans += tp - 1, p += tp;
			}
			if (p == n) {
				printf("%d\n", ans);
				break;
			}
		}
	}
	return 0;
}
*/