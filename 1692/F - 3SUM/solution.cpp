#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '
'
#define all(v) (v).begin(), (v).end()
#define pb push_back
void solve() {
    int n;
    cin >> n;
 
    vector<int> cnt(10);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x % 10]++;
    }
 
    vector<int> a;
    for (int d = 0; d < 10; d++) {
        for (int j = 0; j < min(3LL, cnt[d]); j++)
            a.push_back(d);
    }
 
    int m = a.size();
 
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                if ((a[i] + a[j] + a[k]) % 10 == 3) {
                    cout << "YES
";
                    return;
                }
            }
        }
    }
 
    cout << "NO
";
}
 
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}