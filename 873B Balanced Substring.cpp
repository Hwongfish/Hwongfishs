/*
* algorithm #1 by Hwongfish
#include <iostream>
#include <map>
using namespace std;
const int maxn = 100010;
map<int, int> mp;
int main()
{
    int n, sum = 0, ans = 0;
    string s;
    cin >> n >> s;
    mp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')sum++;
        else sum--;
        if (mp.count(sum))
            ans = max(ans, i + 1 - mp[sum]);
        else
            mp[sum] = i + 1;
    }
    cout << ans;
    return 0;
}
*/