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
        vector<ll> A(n+1);
        REP(i, 1, n+1) {
            cin >> A[i];
        }

        ll i = 1, j = 1;
        ll count = 0;
        for(j = 1; j <= n; j++) {
            ll diff = j - i + 1;
            if(A[j] < diff) {
                i = min(j, i + diff-A[j]);
            }
            count += j - i + 1;
        }

        cout<<count<<endl;
    }
    return 0;
}