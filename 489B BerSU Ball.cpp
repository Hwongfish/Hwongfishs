// - 489B BerSU Ball.cpp
// - Hwongfish_2020.12.05_vs2010
/*
#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    int ans = 0;
    priority_queue<int, vector<int>, greater<int> > a;
    priority_queue<int, vector<int>, greater<int> > b;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push(tmp);
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int tmp;
        cin >> tmp;
        b.push(tmp);
    }
    while (!a.empty() && !b.empty())
    {
        if (abs(a.top() - b.top()) <= 1)
        {
            a.pop();
            b.pop();
            ans++;
        }
        else
        {
            if (a.top() <= b.top())
            {
                a.pop();
            }
            else
            {
                b.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}
*/