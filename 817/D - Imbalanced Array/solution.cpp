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
    int ans = 0;
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
    vector<int> nge(n),pge(n);
    for(int i=0;i<n;i++){
        int idx = i-1;
        while(idx!=-1 && a[idx] <= a[i]){
            idx = pge[idx];
        }
        pge[i] = idx;
    }
    for(int i=n-1;i>=0;i--){
        int idx = i+1;
        while(idx!=n && a[idx] < a[i]){
            idx = nge[idx];
        }
        nge[i] = idx;
    }
    for(int i=0;i<n;i++){
        int negContrib = (i-pse[i])*(nse[i]-i);
        int posContrib = (i-pge[i])*(nge[i]-i);
        ans -= a[i]*negContrib;
        ans += a[i]*posContrib;
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}