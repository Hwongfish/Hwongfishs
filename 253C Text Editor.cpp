/*
algorithm #1 Hwongfish
#include<cstdio>
#include<algorithm>
#define INF 0x3f3f3f3f
const int N = 200000 + 5;
using namespace std;
int a[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int r1, c1, r2, c2;
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);

    int res = INF;
    for (int i = 1; i <= n; i++) {
        int up = min(i, min(r1, r2));
        int down = max(i, max(r1, r2));

        int temp = c1;
        for (int j = up; j <= down; j++)
            temp = min(temp, a[j] + 1);

        int sum = abs(i - r1) + abs(i - r2) + abs(temp - c2);
        res = min(res, sum);
    }
    printf("%d", res);

    return 0;
}
*/