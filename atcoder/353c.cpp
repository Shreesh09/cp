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
    ll n;
    cin >> n;

    vector<ll> A(n);

    REP(i, 0, n) {
        cin >> A[i];
    }

    vector<ll> B(n);
    B[n-1] = A[n-1];
    for(int i = n-2; i >= 0; i--) {
        B[i] += B[i+1] + A[i];
    }


    ll sum = 0;
    for(ll i = 0; i < n-1; i++) {
        sum += (B[i+1]%(ll)1e8 + (A[i]%(ll)1e8 * (n-i-1)));
    }

    cout<<sum<<endl;
    return 0;
}