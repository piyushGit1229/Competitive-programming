
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string a, b;
    cin >> a >> b;

    unordered_map<char, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }

    bool found = true;

    for (int i = 0; i < b.size(); i++)
    {
        if (mp.find(b[i]) != mp.end())
        {
            mp[b[i]]--;
            if (mp[b[i]] == 0)
            {
                mp.erase(b[i]);
            }
        }
        else{
            found = false;
        }
    }
    
    if (found && mp.size() == 3 &&  mp['s'] == 1
    && mp['i'] == 1 &&  mp['x'] == 1)
    {
        found = true;
    }
    else{
        found = false;
    }
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
