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
    int n,k,m;
    cin>>n>>k>>m;
    if(k>m || (k==n && n>m)) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vector<int> pref(n+1,0);
        for(int i=0;i<=n;i++) pref[i] = i%k;
        for(int i=1;i<=n;i++){
            int x = (pref[i]-pref[i-1]+m)%m;
            if(x==0) x=m;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
 
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}