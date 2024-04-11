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
        cin >> n >> k;
        vector<ll> A(n);
        REP(i, 0, n) {
            cin >> A[i];
        }

        ll lK, rK;
        if(k%2 == 0)
            lK = rK = k/2;
        else {
            lK = (k+1)/2;
            rK = (k-1)/2;
        }

        // cout<<lK<<" "<<rK<<endl;
        ll count = 0, i = 0;
        while(i < n && lK > 0) {
            if(lK >= A[i]) {
                count++;
                lK -= A[i];
                A[i] = 0;
            } else {
                A[i] -= lK;
                break;
            }
            i++;
        }
        // cout<<count<<endl;
        ll j = n-1;
        while(j >= i && rK > 0) {
            // cout<<rK<<" "<<A[j]<<" "<<count<<endl;
            if(rK >= A[j]) {
                count++;
                rK -= A[j];
            } else {
                break;
            }
            j--;
        }

        cout<<count<<endl;

    }
    return 0;
}