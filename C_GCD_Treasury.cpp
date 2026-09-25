#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

map<ll, int> primeFactors(ll n) {
    map<ll, int> factors;

    while (n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        factors[n]++;
    }
    
    return factors;
}

void solve(){
    ll n, x;
    cin>>n>>x;

    vector<ll> a(n);

    for(int i = 0; i < n; i++) cin>>a[i];

    map<ll, int> mp = primeFactors(x);
    vector<ll> v;
    ll ans = 0;

    for (auto& p : mp) {
        while(p.second > 0){
            v.push_back(p.first);
            p.second--;
        }
    }

    for(int i = 0; i < v.size(); i++){
        ll cn = 0;
        for(int j = 0; j < n; j++){
            if(a[j] % v[i] == 0) cn+=a[j];
        }

        ans = max(ans, cn);
    }

    cout<<ans<<endl;
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