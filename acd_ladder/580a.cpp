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
    int i = 0; int j = 0;
    ll maxWin = 1;
    for(j = 1; j < n; j++) {
        if(A[j] < A[j-1])
            i = j;
        maxWin = max(maxWin, (ll)j-i+1);
    }

    cout<<maxWin<<endl;
    return 0;
}