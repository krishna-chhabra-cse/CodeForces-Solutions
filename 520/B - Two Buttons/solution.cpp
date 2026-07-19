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
    int n,m;
    cin>>n>>m;
    // reach from m to n
    int start = m;
    int end = n;
    // options +1 or /2
    int cnt = 0;
    while(start != end){
        if(start > end && start%2==0){
            start /= 2;
            cnt++;
        }
        else{
            start += 1;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}