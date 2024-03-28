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
        vector<ll> A(n);
        REP(i, 0, n) {
            cin >> A[i];
            if(A[i] == 1)
                A[i]++;
            if(i == 0)
                continue;
            if(A[i]%A[i-1] == 0)
                A[i]++;
        }

        for(int i : A)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}