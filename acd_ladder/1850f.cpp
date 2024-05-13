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
    int t = 0;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        
        set<ll> A;
        map<ll,ll> count;
        map<ll,ll> mp;
        REP(i, 0, n) {
            ll x;
            cin >> x;
            if(x <= n) {
                count[x]++;
                A.insert(x);
            }
        }


        ll maxRep = 0;
        for(ll e : A) {
            ll t = e;
            while(t <= n) {
                // cout<<e<<" ";
                mp[t] += count[e];
                maxRep = max(maxRep, mp[t]);
                t += e;
            }
        }
        cout<<maxRep<<endl;
        
    }
    return 0;
}