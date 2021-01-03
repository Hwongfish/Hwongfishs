// - 30B Codeforces World Finals.cpp
// - Hwongfish_2020.11.29_vs2010
/*
#include<iostream>
#include<algorithm>
using namespace std;
class date {
	const int month[12 + 05 + 2006] = { 0,31,29,31,30,31,30,31,31,30,31,30,31,0 };
	// Keep It In The Bound!
public:
	int dv[3] = { 0 };
	date() {}
	date(int _d, int _m, int _y) { dv[0] = _d, dv[1] = _m, dv[2] = _y; }
	int in() {
		return scanf("%d.%d.%d", dv, dv + 1, dv + 2);
	}
	date add18() {
		date ans(dv[0], dv[1], dv[2] + 18);
		return ans;
	}
	bool judge(int last_y) {
		if (dv[0] > month[dv[1]] || dv[1] > 12 || dv[2] > 99 || (last_y % 4 != 0 && dv[1] == 2 && dv[0] > 28))
			return 0;
		return 1;
	}
	bool operator <=(date a) {
		return dv[2] <= a.dv[2] ? dv[2] == a.dv[2] ? dv[1] <= a.dv[1] ? dv[1] == a.dv[1] ? dv[0] <= a.dv[0] : true : false : true : false;
	}
}from, to;
int main() {
	to.in(), from.in();
	sort(from.dv, from.dv + 3);
	do {
		// printf("%d.%d.%d : loaded\n", from.dv[0], from.dv[1], from.dv[2]);
		date t = from.add18();
		if (t.judge(from.dv[2]) && t <= to) {
			printf("YES");
			return 0;
		}
	} while (next_permutation(from.dv, from.dv + 3) != 0);
	printf("NO");
	return 0;
}
*/