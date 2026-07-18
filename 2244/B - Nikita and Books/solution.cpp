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
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    int extra = 0;
    int prev = 0;
    for(int i=0;i<n;i++){
        int modify = v[i]+extra;
        if(modify < prev + 1){
            cout<<"NO"<<endl;
            return;
        }
        extra = modify - (prev+1);
        prev++;
    }
    cout<<"YES"<<endl;
    // int req = (n*(n+1))/2;
    // req -= n;
    // req += max(v[n-1],n);
    // int sum = accumulate(all(v),0LL);
    // if(sum >= req ) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}