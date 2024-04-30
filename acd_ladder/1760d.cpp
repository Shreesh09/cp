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
        vector<ll> a(n);
        REP(i, 0, n) {
            cin >> a[i];
        }

        ll count = 0;
        for(int i = 0; i < n; i++) {\
            int j = i;
            while(j < n-1 && a[i] == a[j+1])
                j++;
            if((i == 0 || a[i-1] > a[i]) && (j == n-1  || a[j+1] > a[j])) {
                count++;
            }
            i = j;
        }

        cout<<(count <= 1?"YES":"NO")<<endl;
    }
    return 0;
}