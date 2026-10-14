#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n);

    for(int i = 0; i < n; i++) cin>>a[i];

    int v = n - k + 1;

    if(v <= k){
        v--, k--;

        ll sum = 0;

        if(v == k) {
            sum += a[v];
            v--, k++;
        }

        while(v){
            sum += max(a[v], a[k]);
            v--, k++;
        }

        cout<<sum<<endl;
        return;
    }

    v--, k--;
    ll sm = 0;

    for(int i = k; i <= v; i++) sm += a[i];

    while(k){
        sm += max(a[k], a[v]);
        k--, v++;
    }

    cout<<sm<<endl;
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