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
    string s;
    cin>>s;
    int cnt = 0;
    int ans = 0;
    cnt = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
        else {
            ans = max(ans,cnt);
            cnt = 1;
        }
    }
    ans = max(ans,cnt);
    cout<<ans<<endl;
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
