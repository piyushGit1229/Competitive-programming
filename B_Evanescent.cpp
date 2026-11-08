
#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int n)
{
    map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }

    int mini = INT_MAX;

    for (auto it : mp)
    {
        if (it.second < mini)
        {
            mini = it.second;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i >= 2 && i < n && mp[s[i]] == mini)
        {
            mp[s[i]]--;

            if (mp[s[i]] == 0)
            {
                mp.erase(s[i]);
            }
            break;
        }
    }

    cout << mp.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        solve(s, n);
    }
}
