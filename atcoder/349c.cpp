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
 
int main(void) {
    init_code();
    string s, t;
    cin >> s >> t;
    // cout<<s<<" "<<t;
    // cin >> t;

    t[0] += 32;
    t[1] += 32;
    t[2] += 32;

    if(t[2] == 'x')
        t = t.substr(0,2);

    vector<vector<int>> dp(t.length(), vector<int>(s.length()));
    for(ll i = (ll)t.length()-1; i >= 0; i--) {
        for(ll j = (ll)s.length()-1; j >= 0; j--) {
            if(t[i] == s[j]) {
                if(i < (ll)t.length()-1 && j < (ll)s.length()-1)
                    dp[i][j] = 1 + dp[i+1][j+1];
                else
                    dp[i][j] = 1;
            } else {
                if(i < (ll)t.length()-1)
                    dp[i][j] = max(dp[i][j], dp[i+1][j]);
                if(j < (ll)s.length()-1)
                    dp[i][j] = max(dp[i][j], dp[i][j+1]);
            }
        }
    }
    // cout<<dp[0][0]<<" "<<t<<endl;
    cout<<(dp[0][0] == t.length()?"Yes":"No")<<endl;
    
    return 0;
}