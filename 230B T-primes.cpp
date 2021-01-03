/*
https://codeforces.com/problemset/problem/230/B
algorithm #1 cn.Hwongfish
#include<algorithm>
#include<cstdio>
#include<set>
using namespace std;
set<long long>a;
bool isprime(int i) {
	if (i < 2)
		return false;
	for (int j = 2; j <= sqrt(i); j++)
		if (i % j == 0)
			return false;
	return true;
}
int main() {
	a.insert(4);
	for (long long i = 3; i <= 1000000; i += 2) {
		if (isprime(i)) {
			a.insert(i * i);
		}
	}
	int n = 0;
	scanf("%d", &n);
	for (long long i = 0; i < n; ++i) {
		long long x;
		scanf("%lld", &x);
		printf("%s\n", a.end() == a.find(x) ? "NO" : "YES");
	}
	return  0;
}
*/