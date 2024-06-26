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
        ll maxSum = 0, ind = -1;
        for(ll i = 1; i < n; i++) {
            if((ll)__gcd(n, i)+i >= maxSum) {
                maxSum = (ll)__gcd(n, i)+i;
                ind = i;
            }
        }

        cout<<ind<<endl;
    }
    return 0;
}