#include<cstdio>
#include<algorithm>
using namespace std;
int n, a[107], l;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    l = a[1];
    for (int i = 1; i <= n; i++) {
        if (a[i] != l) {
            printf("%d\n", a[i]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}