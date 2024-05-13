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
        vector<ll> A(n+1);
        REP(i, 1, n+1) {
            cin >> A[i];
        } 

        if(A[1] % 2 == 0) {
            cout<<"NO"<<endl;
            continue;
        }


        bool flag;
        for(int i = 1; i <= min((ll)22, n); i++) {
            flag = false;
            for(int j = i + 1; j >= 1; j--) {
                if(A[i] % j != 0) {
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                break;
            }
        }

        if(flag) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}