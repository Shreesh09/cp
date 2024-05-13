#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long int ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}


ll sol(ll x, vector<ll>& dp) {
    if(x <= 1)
        return x;

    if(dp[x] != -1)
        return dp[x];
    if(x%2 == 0)
        return dp[x] = 1 + sol(x - x/2, dp);
    return dp[x] = 1 + sol(x - (x+1)/2, dp);
}
 
int main(void) {
    init_code();
    vector<ll> dp(2*1e5+1, -1);
    dp[1] = 1;
    dp[0] = 0;
    for(ll i = 2; i <= 2*1e5; i++) {
        sol(i, dp);
    }
    // for(auto i : dp)
    //     cout<<i<<" ";
    int t = 0;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        ll ans = INT_MAX;
        for(char c = 'a'; c <= 'z'; c++) {
            ll maxSeg = 0, seg = 0;
            for(char ch : str) {
                if(ch != c) {
                    seg++;
                } else {
                    maxSeg = max(maxSeg, dp[seg]);
                    seg = 0;
                }
            }
            maxSeg = max(maxSeg, dp[seg]);
            ans = min(ans, maxSeg);
        }
        cout<<ans<<endl;
    }
    return 0;
}