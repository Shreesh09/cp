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
        vector<ll> A(n), B(n);
        REP(i, 0, n) {
            cin >> A[i];
        }

        REP(i, 0, n) {
            cin >> B[i];
        }

        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(A[i] > B[i]) {
                flag = false;
                break;
            }
        }

        if(!flag) {
            cout<<"NO"<<endl;
            continue;
        }

        ll diff = 0;
        diff = B[n-1] - B[0];
        if(diff > 1 && B[n-1] != A[n-1]) {
            cout<<"NO"<<endl;
            continue;
        }

        for(int i = 0; i < n-1; i++) {
            diff = B[i] - B[i+1];
            if(diff > 1 && B[i] != A[i]) {
                flag = false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}