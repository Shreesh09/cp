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
        ll a, b, c, d, minA, minB, maxA, maxB;
        cin >> a >> b >> c >> d;
        int found = 0;
        int k = a;
        bool flag = false;
        while(k != b) {
            if(k == c || k == d) {
                // if(k == a || k == b) {
                //     flag = true
                // }
                found++;
            }

            if(k == 12)
                k = 1;
            else 
                k++;
        }

        if(found == 0 || found == 2) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}