/**
 *
 *  Author : Krish Srivastava
 *
**/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()

const int mod = 998244353;
int testcase = 1;

void solve() {
    int n;
    cin >> n;
    int sum = 0;
    int x;
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }
    int tot = n * (n + 1) / 2;
    cout << tot - sum << endl;
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
