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
        vector<int> c(6);
        ll n, k;
        cin >> n >> k;
        ll minCost = INT_MAX;
        ll tf = 0;
        REP(i, 0, n) {
            int t;
            cin >> t;
            if(t%2 == 0)
                tf++;
            if(t%k == 0) {
                minCost = 0;
            }
            minCost = min(minCost, k - t%k);
        }
        // cout<<minCost<<" "<<tf<<endl;
        if(minCost == 0) {
            cout<<minCost<<endl;
            continue;
        }

        if(k == 2) {
            cout<<1<<endl;
            continue;
        }

        if(k == 3 || k == 5) {
            cout<<minCost<<endl;
            continue;
        }

        if(k == 4) {
            if(n == 1) {
                cout<<minCost<<endl;
                continue;
            }
            if(tf >= 2) {
                cout<<0<<endl;
            } else {
                cout<<min(minCost, 2-tf)<<endl;
            }
        }

    }
    return 0;
}

/*
3
2->4
7->7
7 4 1

*/