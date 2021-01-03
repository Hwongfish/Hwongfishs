// - 1462B Last Year's Substring.cpp
// - 2020.12.20_Hwongfish_vs2019
/*
#include <iostream>
using namespace std;
const int T = 1010, N = 210;
int t = 0;
int main() {
    scanf("%d", &t);
    while (t--) {
        int len;
        char s[N] = { 0 };
        scanf("%d%s", &len, s);
        if (s[0] != '2') {
            if (s[len - 4] == '2' && s[len - 3] == '0' && s[len - 2] == '2' && s[len - 1] == '0') {
                puts("YES\n");
            }
            else puts("NO\n");
        }
        else {
            bool ac = false;
            if (s[len - 3] == '0' && s[len - 2] == '2' && s[len - 1] == '0')ac = true;
            if (s[1] == '0') {
                if (s[len - 2] == '2' && s[len - 1] == '0')ac = true;
                if (s[2] == '2') {
                    if (s[len - 1] == '0')ac = true;
                    if (s[3] == '0')ac = true;
                }
            }
            if (ac)puts("YES\n");
            else puts("NO\n");
        }
    }
}
*/