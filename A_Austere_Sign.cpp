#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    ll n, k;
    cin>>n>>k;

    string s;
    cin.ignore();
    getline(cin, s);

    map<char, ll> mp;
    set<pair<ll, char>> st;

    for(auto c : s){
        if(c != ' ')
            mp[c]++;
    }

    for(auto it : mp){
        st.insert({it.second, it.first});
    }

    if(st.size() <= k) {
        cout<<s<<endl;
        return;
    }

    auto it = st.rbegin();

    char fs = it->second;
    // cout<<fs<<endl;

    int cnt = 0;

    for(auto it = st.rbegin(); it != st.rend(); it++){
        char c = it->second;
        // cout<<c<<" "<<it->first<<endl;
        if(cnt >= k){
            for(int i = 0; i < s.size(); i++){
                if(s[i] != ' ' && s[i] == c) s[i] = fs;
            }
        }

        cnt++;
    }

    cout<<s<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t=1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}