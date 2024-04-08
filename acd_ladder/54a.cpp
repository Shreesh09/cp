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


vector<vector<ll>> dp;
bool sol(ll i, ll j, string s1, string s2) {
    if(j >= s2.length())
        return true;
    if(i >= s1.length())
        return false;
    if(dp[i][j] != -1)
        return dp[i][j];
    
    if(s1[i] == s2[j] && sol(i+1, j+1, s1, s2))
        return dp[i][j] = true;
    return dp[i][j] = sol(i+1, j, s1, s2);
}

 
int main(void) {
    init_code();
    int t = 0;
    string str;
    cin >> str;
    string str2 = "hello";
    dp = vector<vector<ll>> (str.length(), vector<ll>(str2.length(), -1));
    cout<<(sol(0, 0, str, str2)?"YES":"NO")<<endl;
    return 0;
}