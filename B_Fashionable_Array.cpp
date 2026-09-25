#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    map<int, int> mp;

    int mx = INT_MIN;

    for(int i = 0; i < n; i++) {
        cin>>a[i];
        mp[a[i]]++;

        mx = max(mx, a[i]);
    }

    while(1){
        int cn = 0;
        for(int i = mx; i>=1; i--){
            if(mp[i] != 0){
                cout<<i<<" ";
                mp[i]--;
            }
            else cn++;
        }

        if(cn == mx) break;
    }

    cout<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}