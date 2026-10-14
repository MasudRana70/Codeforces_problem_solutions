#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

ll sumsq(ll n){
    ll sum = 0;
    while(n){
        ll v = n % 10;
        sum += (v * v);
        n /= 10;
    }

    return sum;
}

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    map<ll, ll> mp;

    for(int  i = 0; i < n; i++) {
        cin>>a[i];
    }

    ll sum = 0;

    int cn = 0;

    for(int i = 0; i < n; i++){
        int v = a[i], vl = a[i];
        for(int j = 0; j < 100; j++){
            v = sumsq(v);
        }

        a[i] = v;
    }

    for(auto i : a) mp[i]++;

    for(auto i : mp){
        ll v = i.second;
        sum += ((v * ( v - 1)) / 2);
    }
    cout << sum << endl;
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