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

        vector<ll> A(n);
        REP(i, 0, n) {
            cin >> A[i];
        }
        
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++) {
            ll j = i+1;
            while(j < n && A[j] == A[i])
                j++;
            mp[j] = i+1;
            i = j-1;
        }

        // for(auto p : mp)
            // cout<<p.first<<" "<<p.second<<endl;

        ll q;
        cin >> q;
        while(q--) {
            ll l, r;
            cin >> l >> r;
            auto interval = mp.lower_bound(r);
            if(l >= interval->second)
                cout<<-1<<" "<<-1<<endl;
            else {
                cout<<(interval->second)-1<<" "<<r<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}