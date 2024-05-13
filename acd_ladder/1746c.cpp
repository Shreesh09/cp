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
        set<ll> st;
        REP(i, 0, n) {
            cin >> A[i];
            st.insert(i+1);
        }

        vector<ll> C(n+1, -1);
        for(int i = 1; i < n; i++) {
            ll t = max((ll)0, A[i-1] - A[i]);
            if(t > 0) {
                auto p = st.lower_bound(t);
                C[*p] = i + 1;
                st.erase(p);
            }
        }

        for(int i = 1; i <= n; i++) {
            if(C[i] == -1)
                cout<<1<<" ";
            else
                cout<<C[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}