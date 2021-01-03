/*
algorithm #1 Hwongfish
#include<iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e6 + 7;
const int mod = 998244353;
typedef long long ll;

int num[20];
ll p[maxn];
int main() {
    int T; scanf("%d", &T);
    while (T--) {
        ll n, s; scanf("%lld%lld", &n, &s);
        p[0] = 1;
        for (int i = 1; i <= 18; i++) {
            p[i] = p[i - 1] * 10;
        }
        memset(num, 0, sizeof(num));
        int cnt = 0;
        int sum = 0;
        ll tmp = n;
        while (tmp) {
            num[++cnt] = tmp % 10;
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum <= s) {
            printf("0\n");
            continue;
        }
        tmp = n;

        for (int i = 1; i <= cnt; i++) {
            sum -= num[i];
            tmp -= p[i - 1] * num[i];
            if (num[i + 1] != 9 && sum + 1 <= s) {
                tmp += p[i];
                printf("%lld\n", tmp - n);
                break;
            }
        }
    }
    return 0;
}
*/