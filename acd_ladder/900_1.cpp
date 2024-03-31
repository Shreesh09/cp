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
    ll n, i;
    cin >> n >> i;
    if(i <= (ll)ceil(n/2.0)) {
        cout<<2*i-1<<endl;
    } else {
        cout<<2*(i - (ll)ceil(n/2.0))<<endl;
    }
    return 0;
}