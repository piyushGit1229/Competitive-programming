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

bool solve(string s , string t, int n){
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    for(char c : s){
        mp1[c]++;
    }
    for(char c : t){
        mp2[c]++;
    }
    if(mp1 == mp2){
        return true;
    }
    return false;
}

int main()
{
    
    fast_io();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t;
        cin>>t;
        if(solve(s,t,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
