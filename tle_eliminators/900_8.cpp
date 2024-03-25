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
        vector<char> A(n);
        REP(i, 0, n) {
            cin >> A[i];
        }

        int win = 1, maxWin = 1;
        for(int i = 1; i < n; i++) {
            if(A[i-1] == A[i]) {
                win++;
                maxWin = max(win, maxWin);
            } else {
                win = 1;
            }
        }

        cout<<maxWin+1<<endl;
    }
    return 0;
}