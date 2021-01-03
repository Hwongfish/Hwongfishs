// - 48A Rock-Paper-Scissors.cpp
// - Hwongfish_2020.12.06_VIM
/*
 * algorithm #1
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char ina[1000010], inb[1000010];
int map[1000][1000] = { 0 };
int n, ansa = 0, ansb = 0;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
main()
{
    map['P']['S'] = 1;
    map['S']['R'] = 1;
    map['R']['P'] = 1;
    scanf("%d", &n);
    scanf("%s%s", ina, inb);
    int lena = strlen(ina);
    int len2 = strlen(inb);
    int t = lena / gcd(max(lena, len2), min(lena, len2)) * len2;
    int len = t;
    int now = 0;
    for (int i = lena; i < len; i++)
    {
        ina[i] = ina[now];
        now++;
        now %= lena;
    }
    now = 0;
    for (int i = len2; i < len; i++)
    {
        inb[i] = inb[now];
        now++;
        now %= len2;
    }
    bool b = 0;
    if (len < n)
        b = 1;
    for (int i = 0; i < min(len, n); i++)
    {
        ansa += map[ina[i]][inb[i]];
        ansb += map[inb[i]][ina[i]];
    }
    if (b == 1)
    {
        ansa *= n / len;
        ansb *= n / len;
        for (int i = 0; i < n - n / len * len; i++)
        {
            ansa += map[ina[i]][inb[i]];
            ansb += map[inb[i]][ina[i]];
        }
    }
    printf("%d %d\n", ansa, ansb);
    return 0;
}
*/
/*
* algorithm #2
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1000;
int n = 0, ansa = 0, ansb = 0;
char a[N] = { 0 }, b[N] = { 0 };
int map[N/2][N/2] = { 0 };
int main(){
	map['P']['S'] = 1;
	map['S']['R'] = 1;
	map['R']['P'] = 1;
	scanf("%d%s%s",&n,a,b);
	int lena = strlen(a), lenb = strlen(b);
	int f_gcd = lena*lenb;
	for(int i = 0; i<f_gcd&&i<n;++i){
		int times = 1 + (n-i-1)/f_gcd;
		ansa += map[a[i%lena]][b[i%lenb]]*times;
		ansb += map[b[i%lenb]][a[i%lena]]*times;
	}
	printf("%d %d\n",ansa,ansb);
	return 0;
}
*/