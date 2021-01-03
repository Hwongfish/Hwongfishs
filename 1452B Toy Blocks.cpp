// - 1452B Toy Blocks.cpp
// - Hwongfish_2020.12.09_VIM
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int T = 1000;
const int N = 100010;
long long t = 0;
int main() {
	scanf("%lld", &t);
	while (t--) {
		long long n = 0, sum = 0, max_n = 0;
		vector<long long>a;
		scanf("%lld", &n);
		for (long long i = 0; i < n; ++i) {
			long long x = 0;
			scanf("%lld", &x);
			a.push_back(x);
			sum += x;
			if (x > max_n)max_n = x;
		}
		long long ans = max(max_n, (sum + n - 2) / (n - 1));
		printf("%lld\n", ans * (n - 1) - sum);
	}
	return 0;
}
*/