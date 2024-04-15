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
    
    ll n, m;
    cin >> n >> m;
    vector<ll> A(m);

    REP(i, 0, m) {
        cin >> A[i];
    }

    ll time = 0, pos = 1;
    for(ll i : A) {
        time += (i >= pos)?(i - pos):(n - pos + i);
        pos = i;
    }

    cout<<time<<endl;

    return 0;
}