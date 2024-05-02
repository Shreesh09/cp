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
        ll maxE = 2;
        REP(i, 0, n-1) {
            cin >> A[i];
            maxE = max(maxE, A[i]+1);
        }

        cout<<maxE<<" ";
        int s = maxE;
        for(int i = 0; i < n-1; i++) {
            s = s+A[i];
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}