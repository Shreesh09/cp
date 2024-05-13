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
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> A;
        map<ll, ll> mp;
        ll ans = 0;
        A.push_back(0);
        REP(i, 1, n+1) {
            ll t;
            cin >> t;
            mp[t]++;
            if(mp[t] > 1) {
                ans += c;
                continue;
            }
            A.push_back(t);
        }

        sort(A.begin(), A.end());
        
        ll del = 1e18, add = 0;
        ll offset = 0;

        if(A[1] != 1) {
            add += d;
            A.insert(A.begin() + 1, 1);
        }

        
        for(int i = 2; i < A.size(); i++) {
            // cout<<i+offset<<" "<<A[i]<<endl;
            ll delCost = c*(A.size()-i);
            del = min(del, delCost + add);

            if(i + offset != A[i]) {
                add += d*(A[i] - i - offset);
                offset += A[i] - i - offset;
            }
        }

        // cout<<del<<" "<<add<<endl;
        cout<<(ans + min(del, add))<<endl;
    }
    return 0;
}