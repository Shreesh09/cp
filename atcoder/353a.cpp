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
    vector<ll> A(n);
    REP(i, 0, n) {
        cin >> A[i];
    }

    ll ans = -1;
    for(int i = 1; i < n; i++) {
        if(A[i] > A[0]) {
            ans = i + 1;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}