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
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum += x;
    }
    if(sum%4 == 0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}