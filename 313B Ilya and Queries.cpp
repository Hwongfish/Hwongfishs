/*
* algorithm#1 by Hwongfish
#include<iostream>
#include<string>
using namespace std;
const int N = 10000;
int n = 0, had[N] = { 0 };
char a[N] = { 0 };
int main() {
	scanf("%s", a);
	scanf("%d", &n);
	for (int i = 1; a[i] != 0; ++i) {
		if (a[i] == a[i - 1])had[i] = had[i - 1] + 1;
		else had[i] = had[i - 1];
	}
	for (int i = 0; i < n; ++i) {
		int l = 0, r = 0;
		scanf("%d%d", &l, &r);
		printf("%d\n",had[r-1]-had[l-1]);
	}
	return 0;
}
*/