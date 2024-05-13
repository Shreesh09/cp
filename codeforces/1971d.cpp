#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}


ll sol(string s, map<string,ll>& dp) {
    if(dp.find(s) != dp.end())
        return dp[s];
    
    ll count = 0;
    for(ll i = 1; i < s.length(); i++) {
        if(s[i] != s[i-1])
            count++;
    }

    return dp[s] = count;
}

 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        ll n = str.length();
        map<string, ll> mp;

        int i = 0;
        while(i < n && str[i] != '0') {
            i++;
        }

        ll ans = INT_MAX;

        for(int j = i; j < n; j++) {
            int k = j;
            while(k < n && str[k] == '0') {
                k++;
            }
            while(k < n && str[k] == '1') {
                k++;
            }
            
            ll leftCut = 0, rightCut = 0;
            if(j > 0) {
                leftCut = sol(str.substr(0, j), mp) + 1;
            }
            if(k < n) {
                rightCut = sol(str.substr(k), mp) + 1;
            }
            ans = min(ans, leftCut + rightCut);
        }

        if(ans == INT_MAX)
            cout<<1<<endl;
        else
            cout<<ans+1<<endl;
    }
    return 0;
}