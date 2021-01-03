// - 523D Statistics of Recompressing Videos.cpp
// - Hwongfish_2020.11.29_vs2010
/*
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
class node
{
public:
    long long pos; long long end;
    friend bool operator < (node a, node b) {
        return a.end > b.end;
    }
}now, nex;
long long ans[3000000];
int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    priority_queue<node>s;
    for (long long i = 0; i < n; i++)
    {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        while (s.size() > 0 && s.top().end < a)ans[s.top().pos] = s.top().end, s.pop();
        if (s.size() < m) {
            now.end = a + b;
            now.pos = i;
            s.push(now);
        }
        else {
            now.end = s.top().end + b;
            ans[s.top().pos] = s.top().end;
            s.pop();
            now.pos = i;
            s.push(now);
        }
    }
    while (!s.empty()) {
        ans[s.top().pos] = s.top().end;
        s.pop();
    }
    for (long long i = 0; i < n; i++)
        printf("%lld\n", ans[i]);
}
*/