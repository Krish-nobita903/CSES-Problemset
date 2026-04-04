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
    int y,x;
    cin>>y>>x;
    int ans = 0;
    if (x>y) {
        if (x%2) {
            ans = x*x;
            ans -= (y-1);
        }
        else {
            x--;
            ans = x*x;
            ans += y;
        }
    }
    else {
        if (y%2==0) {
            ans = y*y;
            ans -= (x-1);
        }
        else {
            y--;
            ans = y*y;
            ans += x;
        }
    }
    cout<<ans<<"\n";
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
