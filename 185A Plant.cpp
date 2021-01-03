// - 185A Plant.cpp
// - Hwongfish_2020.12.05_vs2010
/*
#include<iostream>
#include<algorithm>
using namespace std;
const int mod = 1e9 + 7;
long long dfs(long long i) {
    if (i == 0)return 1;
    if (i == 1)return 2;
    if (i % 2 == 0) {
        long long x = dfs(i / 2);
        return (x * x) % mod;
    }
    else {
        long long x = dfs(i / 2);
        return (((x * x) % mod) * 2) % mod;
    }
}
int main() {
    long long n;
    scanf("%I64d", &n);
    long long t = dfs(n);
    printf("%I64d", t * (t + 1) / 2 % mod);
    return 0;
}
*/