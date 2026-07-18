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
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a) cin>>i;
    vector<int> v(n+1,0);
    vector<int> nse(n),pse(n);
    for(int i=0;i<n;i++){
        int idx = i-1;
        while(idx!=-1 && a[idx] >= a[i]){
            idx = pse[idx];
        }
        pse[i] = idx;
    }
    for(int i=n-1;i>=0;i--){
        int idx = i+1;
        while(idx!=n && a[idx] > a[i]){
            idx = nse[idx];
        }
        nse[i] = idx;
    }
    for(int i=0;i<n;i++){
        int len = nse[i]-pse[i]-1;
        v[len] = max(a[i],v[len]);
    }
    for(int i=n-1;i>=0;i--){
        v[i] = max(v[i],v[i+1]);
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}