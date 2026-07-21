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
    stack<char>st;
    int cnt=0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] == '(') st.push('(');
        else{
            if(!st.empty()){
                st.pop();
                cnt++;
            }
        }
    }
    cout<<2*cnt<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}