#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '
'
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define int long long
 
int n,q,limit,num;
vector<int> v;
vector<int> chota_Cockroach;
deque<int> dq;
vector<pair<int,int>> GodiMedia;
void Activate_IT_Cell(){
    dq.pop_front();
    while(!dq.empty()){
        chota_Cockroach.pb(dq.front());
        dq.pop_front();
    }
}
void CockroachJantaParty(){
    int i=0;
    while(true){
        int a = dq.front();
        dq.pop_front();
        int b = dq.front();
        dq.pop_front();
        if(a==num){
            dq.push_front(a);
            dq.pb(b);
            GodiMedia.pb(make_pair(a,b));
            limit = i+1;
            break;
        }
        else{
            if(a>b){
                dq.push_front(a);
                dq.pb(b);
            }
            else{
                dq.push_front(b);
                dq.pb(a);
            }
            GodiMedia.pb(make_pair(a,b));
        }
        i++;
    }
}
 
 
void solve() {
    // Your code
    dq.clear();
    chota_Cockroach.clear();
    GodiMedia.clear();
    cin>>n>>q;
    v.resize(n);
    for(auto &i:v){
        cin>>i;
        dq.pb(i);
    }
    num = *max_element(all(v));
    CockroachJantaParty();
    Activate_IT_Cell();
    while(q--){
        int x;
        cin>>x;
        if(x <= limit){
            cout<<GodiMedia[x-1].f<<" "<<GodiMedia[x-1].s<<endl;
        }
        else{
            int idx = (x-limit-1)%(n-1);
            cout<<num<<" "<<chota_Cockroach[idx]<<endl;
        }
    }
}
 
int32_t main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
}