
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    int x = arr[1]- arr[0];
    int y = arr[2] - arr[1];
    int ans = min(x,y);
    cout<<ans<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        vector<int> arr(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        solve(arr);
    }
}
