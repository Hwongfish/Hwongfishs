/*
#include<iostream>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;
typedef unsigned long long ull;

int h, c, t;
double f(int x)
{
    int l = x / 2 + 1, r = x / 2;
    return 1.0 * (1LL * l * h + 1LL * r * c) / x;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d%d", &h, &c, &t);
        if (1.0 * (h + c) / 2 >= 1.0 * t)
        {
            printf("2\n");
            continue;
        }
        int l = 1, r = 1000000, pos;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            double now = f(mid * 2 - 1);
            if (now >= 1.0 * t)
            {
                pos = 2 * mid - 1;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if (abs(f(pos) - 1.0 * t) > abs(f(pos + 2) - 1.0 * t))
            printf("%d\n", pos + 2);
        else printf("%d\n", pos);
    }
    return 0;
}
*/