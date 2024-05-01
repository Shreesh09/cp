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
        if(n == 1) {
            cout<<0<<"\n";
            continue;
        } 

        vector<pair<ll,ll>> ans;
        ans.push_back({1, n});
        if((A[0] + A[n-1])%2 == 0) {
            A[0] = A[n-1];
        } else 
            A[n-1] = A[0];
        for(int i = 1; i < n-1; i++) {
            if((A[i] + A[0])%2 == 0) {
                ans.push_back({i+1, n});
            } else {
                ans.push_back({1, i+1});
            }
        }

        cout<<ans.size()<<"\n";
        for(auto x: ans) {
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
    return 0;
}