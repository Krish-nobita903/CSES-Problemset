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
    cin>>n;
    if (n==1) {
        cout<<1<<"\n";
        return;
    }
   if (n<=3) {
       cout<<"NO SOLUTION\n";
       return;
   }
    for (int i=2; i<=n; i+=2) {
        cout<<i<<" ";
    }
    for (int i=1; i<=n; i+=2) {
        cout<<i<<" ";
    }
    cout<<"\n";
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
