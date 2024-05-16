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
        vector<ll> A(n), B(n);
        REP(i, 0, n) {
            cin >> A[i];
        }
        REP(i, 0, n) {
            cin >> B[i];
        }

        REP(i, 1, n) {
            B[i] += B[i-1];
        }


        for(int i = n-2; i >= 0; i--) {
            // B[i] += B[i+1];
            A[i] += A[i+1];
        }
        // REP(i, 0, n) {
        //     cout<<A[i]<<" ";
        // }
        // cout<<endl;

        // REP(i, 0, n) {
        //     cout<<B[i]<<" ";
        // }
        // cout<<endl;

        ll ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            ll left = 0;
            if(i > 0)
                left = B[i-1];
            ll right = 0;
            if(i < n-1)
                right = A[i+1];
            ans = min(ans, max(left, right));
        }
        cout<<ans<<endl;
    }
    return 0;
}