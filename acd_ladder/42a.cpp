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
    
    ll n;
    cin >> n;
    map<string, int> mp;
    pair<string,int> winningTeam;
    
    REP(i, 0, n) {
        string str;
        cin >> str;
        mp[str]++;
        if(winningTeam.second < mp[str])
            winningTeam = {str, mp[str]};
    }

    cout<<winningTeam.first<<endl;

    return 0;
}