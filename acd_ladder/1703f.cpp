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
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> mp;
        multimap<ll, ll> f;
        REP(i, 0, n) {
            ll t;
            cin >>t;
            if(t < i+1) {
                mp.push_back({t, i+1});
                f.insert({t,0});
            }
        }

        int i = 0;
        auto p = f.begin();
        while(p != f.end()) {
            // cout<<f.size()<<" "<<i<<"\n";
            p->second = f.size() - i;
            i++;
            p++;
        }

        // for(auto e : f) {
        //     cout<<e.first<<" "<<e.second<<"\n";
        // }

        ll sum = 0;
        for(auto x: mp) {
            auto p = f.upper_bound(x.second);
            if(p == f.end())
                continue;
            sum += p->second;
        }

        cout<<sum<<"\n";
        
    }
    return 0;
}