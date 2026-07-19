#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '
'
 
int32_t main() {
    fast_io;
    
    int n;
    cin >> n;
 
    if (n <= 2) {
        cout << n << endl;
    } 
    else if (n == 3) {
        cout << 6 << endl;
    }
    else if (n % 2) {
        cout << n * (n - 1) * (n - 2) << endl;
    } 
    else {
        if (n % 3) {
            cout << n * (n - 1) * (n - 3) << endl;
        } else {
            cout << (n - 1) * (n - 2) * (n - 3) << endl;
        }
    }
 
    return 0;
}