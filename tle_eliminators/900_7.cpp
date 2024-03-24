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
        ll n, d;
        cin >> n >> d;
        vector<ll> A(n);
        REP(i, 0, n) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        ll win = 1, maxWin = 1;

        for(int i = 1; i < A.size(); i++) {
            if(fabs(A[i] - A[i-1]) <= d) {
                win++;
                maxWin = max(maxWin, win);
            } else {
                win = 1;
            }
        }

        cout<<A.size()-maxWin<<endl;
    }
    return 0;
}