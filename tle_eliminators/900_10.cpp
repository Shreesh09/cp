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
        ll n, q, sum = 0;
        cin >> n >> q;
        vector<ll> A(n);
        vector<ll> preSum(n);
        REP(i, 0, n) {
            cin >> A[i];
            sum += A[i];
        }
        preSum[0] = A[0];
        for(int i = 1; i < n; i++) {
            preSum[i] = preSum[i-1] + A[i];
        }

        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;
            ll newSum = sum;
            if(r >= 1)
                newSum -= preSum[r-1];
            if(l > 1)
                newSum += preSum[l-2];
            newSum += k * (r - l + 1);
            if(newSum % 2 != 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}