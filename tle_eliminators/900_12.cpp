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
        ll maxD = INT_MIN;
        ll maxR = INT_MIN, minL = INT_MAX;
        REP(i, 0, n) {
            cin >> A[i];
            if(i < n-1)
                minL = min(minL, A[i]);
        }

        for(int i = 1; i < n; i++) {
            maxD = max(maxD, A[i-1] - A[i]);
            maxR = max(maxR, A[i]);
        }

        maxD = max(maxD, A[n-1] - A[0]);


        cout<<max({(ll)0, maxD, A[n-1] - minL, maxR - A[0]})<<endl;

    }
    return 0;
}