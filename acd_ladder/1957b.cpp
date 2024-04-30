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
        ll n, k;
        cin >> k >> n;
        if(k == 1) {
            cout<<n<<endl;
            continue;
        }

        ll t = n, c = 0;
        while(t != 0) {
            t = t >> 1;
            c++;
        }
        ll sum = pow(2,c-1)-1;
        cout<<sum<<" "<<n - sum<<" ";
        k-=2;
        while(k--) {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}