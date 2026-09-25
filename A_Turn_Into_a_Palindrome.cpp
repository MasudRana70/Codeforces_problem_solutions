#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    int n;
    char c;

    cin>>n>>c;

    string s;
    cin>>s;

    int cn = 0;

    for(int i = 0; i < (n / 2); i++){
        if(s[i] != s[n-i-1]){
            if(s[i] != c) cn++;
            if(s[n-i-1] != c) cn++;
        }
    }

    cout<<cn<<endl;
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