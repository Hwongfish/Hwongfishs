// * 1462A Favorite Sequence.cpp
// * 2021/01/01_Hwongfish_VIM
/*
#include <iostream>
using namespace std;
const int N = 305;
int a[N] = { 0 }, t = 0, n = 0;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i + 1];
        }
        int l = 1, r = n;
        while (l <= r) {
            if (l == r) {
                printf("%d", a[l]);
                break;
            }
            printf("%d %d ", a[l++], a[r--]);
        }
        cout << '\n';
    }
    return 0;
}
*/