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

void sol(vector<ll>& fac) {
    for(ll i = 2; i <= 1e6; i++) {
        if(fac[i] != INT_MAX)
            continue;
        for(ll j = i; j <= 1e6; j += i) {
            fac[j] = min(fac[j],i);
        }
    }
}
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    vector<ll> fac(1e6+1, INT_MAX);
    sol(fac);
    while(t--) {
        ll m, n;
        cin >> m >> n;
        if(m == 1){
            cout<<"YES"<<endl;
            continue;
        }
        if(n >= m) {
            cout<<"NO"<<endl;
            continue;
        }
        
        int f = fac[m];
        cout<<((n<f)?"YES":"NO")<<endl;
    }
    return 0;
}