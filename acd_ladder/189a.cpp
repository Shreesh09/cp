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

vector<ll> dp;

int sol(ll n, ll a, ll b, ll c) {
    if(n < 0)
        return INT_MIN;
    if(n == 0)
        return 0;
    if(dp[n] != -1)
        return dp[n];
    return dp[n] =  1 + max({sol(n-a, a, b, c), sol(n-b, a, b, c), sol(n-c, a, b, c)});
}

int main(void) {
    init_code();
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    dp = vector<ll>(n+1, -1);
    cout<<max(0, sol(n, a, b, c));
    return 0;
}