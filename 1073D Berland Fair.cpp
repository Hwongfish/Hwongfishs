/*
algorithm #1 by Hwongfish
#include<iostream>
using namespace std;
const int N = 210000;
int n, top;
long long ans, t, minn = 1000000000000000000;
long long s[N];
int main()
{
    scanf("%lld%lld", &n, &t);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", s + i);
        if (s[i] < minn)minn = s[i];
    }
    while (t >= minn)
    {
        long long tmp = t, rnt = 0;
        for (int i = 1; i <= n; i++)
            if (tmp >= s[i]) tmp -= s[i], ++rnt;
        tmp = t - tmp;
        long long k = t / tmp;
        ans += k * rnt;
        t -= k * tmp;
    }
    cout << ans << endl;
    return 0;
}
*/