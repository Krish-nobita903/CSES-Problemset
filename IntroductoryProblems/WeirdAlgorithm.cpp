/**
 *
 *
 *  Author : Krish Srivastava
 *      
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
    while (n!=1) {
        cout<<n<<" ";
        if (n%2==0) n/=2;
        else n = 3*n+1;
    }
    cout<<n<<"\n";
}

signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
