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
 
int main(void) {
    init_code();
    vector<ll> prime(1e6+1, 1);

    for(ll i = 2; i <=1e6; i++) {
        if(!prime[i])
            continue;
        for(ll j = i*i; j <=1e6; j+=i) {
            prime[j] = 0;
        }
    }

    set<ll> ans;
    for(ll i = 2; i <= 1e6; i++) {
        if(prime[i])
            ans.insert(i*i);
    }

    ll n;
    cin >> n;
    vector<ll> A(n);
    REP(i, 0, n) {
        cin >> A[i];
        cout<<(ans.find(A[i]) != ans.end()?"YES\n":"NO\n");
    }
    
    return 0;
}