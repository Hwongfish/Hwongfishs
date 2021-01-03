// - 527C Glass Carving.cpp
// - 2020.12.20_Hwongfish_VIM
/*
* algorithm #1
#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
const int N = 200000 + 10;
int main() {
	int w = 0, h = 0, n = 0;
	set<int>sH,sW;
	multiset<int>mH,mW;
	scanf("%d%d%d", &w, &h, &n);
	sH.clear(); sW.clear();
	mW.clear(); mH.clear();
	sH.insert(h); sH.insert(0);
	sW.insert(w); sW.insert(0);
	mH.insert(h); mW.insert(w);
	char order;
	int pos = 0;
	while (n--) {
		cin >> order >> pos;
		if (order == 'H') {
			sH.insert(pos);
			int a = *(--sH.find(pos));
			int b = *(++sH.find(pos));
			mH.erase(mH.find(b - a));
			mH.insert(b - pos);
			mH.insert(pos - a);
		}
		else {
			sW.insert(pos);
			int a = *(--sW.find(pos));
			int b = *(++sW.find(pos));
			mW.erase(mW.find(b - a));
			mW.insert(b - pos);
			mW.insert(pos - a);
		}
		printf("%I64d\n", (long long)*(--mW.end()) * *(--mH.end()));
	}
	return 0;
}

*/