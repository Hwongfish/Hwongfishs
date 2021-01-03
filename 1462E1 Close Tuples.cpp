// * 1462E1 Close Tuples.cpp
// * 2020/01/01_Hwongfish_VIM
/*
* algorithm TIME_LIMIT_EXCEEDED
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 2e5 + 10;
unsigned long long t = 0, n = 0, a[N] = { 0 }, cnt[N] = { 0 }, ans = 0;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for (unsigned long long i = 0; i < n; ++i) {
			scanf("%d", a + i);
			cnt[a[i]]++;
		}
		for (unsigned long long i = 1; i <= n; ++i) {
			if (cnt[i] == 0)continue;
			ans += cnt[i] * cnt[i + 1] * cnt[i + 2];
			ans += cnt[i] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
			ans += cnt[i] * cnt[i + 2] * (cnt[i + 2] - 1) / 2;
			ans += cnt[i] * (cnt[i] - 1) * cnt[i + 1] / 2;
			ans += cnt[i] * (cnt[i] - 1) * cnt[i + 2] / 2;
			ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
		}
		printf("%lld\n",ans);
		memset(cnt, 0, sizeof cnt); ans = 0;
	}
	return 0;
}
*/
/*
* algorithm #1
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 200010;
long long a[N] = { 0 }, n = 0;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		long long count = 0;
		for (int i = 0; i < n - 2; i++) {
			long long x = upper_bound(a + i, a + n, a[i] + 2) - a - i - 1;
			count += ((x * (x - 1)) / 2);
		}
		cout << count << endl;
	}
	return 0;
}
*/