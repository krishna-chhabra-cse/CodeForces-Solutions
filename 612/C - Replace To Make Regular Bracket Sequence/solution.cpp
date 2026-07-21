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
    stack<int> st;
    map<char,char> inv;
    inv['['] = ']';
    inv['<'] = '>';
    inv['{'] = '}';
    inv['('] = ')';
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '[' || s[i] == '<' || s[i] == '(' || s[i] == '{') st.push(s[i]);
        else {
            if(st.empty()){
                cout<<"Impossible"<<endl;
                return;
            }
            else if(!st.empty() && s[i] == inv[st.top()]) st.pop();
            else {cnt++;st.pop();}
        }
    }
    if(!st.empty()){
        cout<<"Impossible"<<endl;
        return;
    }
    cout<<cnt<<endl;
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}