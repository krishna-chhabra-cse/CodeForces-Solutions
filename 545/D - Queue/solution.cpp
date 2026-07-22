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
    sort(all(v));
    int cjp = 0;
    int time = 0;
    for(int i=0;i<n;i++){
        if(time <= v[i]){
            time += v[i];
            cjp++;
        }  
    }
    cout<<cjp<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}