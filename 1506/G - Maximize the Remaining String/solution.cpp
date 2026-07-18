#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '
'
#define all(v) (v).begin(), (v).end()
#define pb push_back
 
void solve() {
    // Your code
    string s;
    cin>>s;
    int n = s.size();
    int vis[30] = {0};
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]] = i;
    }
    string ans = "";
    for(int i=0;i<n;i++){
        while(!ans.empty() && (ans.back() <= s[i]) && (mp[ans.back()] > i) && (!vis[s[i]-'a'])){
            vis[ans.back()-'a'] = 0;
            ans.pop_back();
        }
        if(!vis[s[i]-'a']){
            ans += s[i];
            vis[s[i]-'a'] = 1;
        }
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}