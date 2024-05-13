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

    ll n, k;
    cin >> n >> k;
    vector<ll> A(n);
    REP(i, 0, n) {
        cin >> A[i];
    }

    ll seats = k;
    ll ans = 1;
    for(int i = 0; i < n; i++) {
        if(seats >= A[i]) {
            seats -= A[i];
        } else {
            ans++;
            seats = k - A[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}