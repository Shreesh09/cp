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

int euler(int a, int b) {
    if(b == 0 || a == 0)
        return max(a,b);
    if(a > b)
        return euler(b, a%b);
    return euler(a, b%a);
}
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> A(n);
        ll gcd = 0;
        REP(i, 0, n) {
            ll t;
            cin >> t;
            A[i] = fabs(t - i - 1);
            //cout<<A[i]<<" ";
            if(A[i] != 0)
                gcd = euler(A[i], gcd);
        }

        cout<<gcd<<endl;
    }
    return 0;
}