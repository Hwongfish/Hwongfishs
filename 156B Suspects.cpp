// - 156B Suspects.cpp
// - Hwongfish_2020.12.06_VIM
/*
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
int m = 0, n = 0;
int a[N] = { 0 }, pw[N] = { 0 }, nw[N] = { 0 };
int tnw = 0;
int cnt[N] = { 0 };
int main(){
	scanf("%d%d\n",&n,&m);
	for(int i = 1;i<=n;++i){
		scanf("%d",a+i);
		if(a[i]>0){
			pw[a[i]]++;
		}
		else{
			nw[-a[i]]++;
			tnw++;
		}
	}
	for(int i = 1;i<=n;++i){
		if(pw[i]+(tnw-nw[i])==m){
			cnt[i]=1;
			cnt[0]++;
		}
	}
	for(int i = 1;i<=n;++i){
		if(a[i]>0){
			if(cnt[a[i]]&&cnt[0]==1) printf("Truth\n");
			else if(!cnt[a[i]]) printf("Lie\n");
			else printf("Not defined\n");
		}
		else {
			if (!cnt[-a[i]])printf("Truth\n");
			else if (cnt[-a[i]] && cnt[0] == 1)printf("Lie\n");
			else printf("Not defined\n");
		}
	}
	return 0;
}

Twice
#include<iostream>
using namespace std;
const int N = 100010;
int n = 0, m = 0;
int fin[N] = { 0 }, cnt[N] = { 0 }, tc = 0;
int nw[N] = { 0 }, pw[N] = { 0 };
int tnw = 0;
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", fin + i);
		if (fin[i] < 0)tnw++, nw[-fin[i]]++;
		else pw[fin[i]]++;
	}
	for (int i = 1; i <= n; ++i) {
		if (pw[i] + tnw - nw[i]) {
			++cnt[i] = 1;
			++tc;
		}
	}
	for (int i = 0; i <= n; ++i) {
		if (fin[i] > 0) {
			if (cnt[fin[i]] == 1 && tnw == 1)printf("Truth\n");
			else if (!cnt[fin[i]]) printf("Lie\n");
			else printf("Not defined\n");
		}
		else {
			if (!cnt[-fin[i]])printf("Truth\n");
			else if (cnt[-fin[i]] && cnt[0] == 1)printf("Lie\n");
			else printf("Not defined\n");
		}
	}
}
*/