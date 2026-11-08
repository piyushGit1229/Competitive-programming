#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
