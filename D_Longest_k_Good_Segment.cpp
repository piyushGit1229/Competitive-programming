
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxlen = 0;
    int start = 0;
    int last = 0;
    int i=0;
    int j=0;
    unordered_map<int,int>mp;
    while(j < n){
        mp[arr[j]]++;
        while(mp.size() > k){
            mp[arr[i]]--;
            if(mp[arr[i]] == 0){
                mp.erase(arr[i]);
            }
            i++;
        }
        if(j-i+1 > maxlen){
            maxlen = j - i + 1;
            start = i+1;
            last =  j+1;
        }
        j++;
    }
    cout<<start<<" "<<last;
}

