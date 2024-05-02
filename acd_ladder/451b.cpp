#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
 
int main(void) {
    init_code();
        ll n;
        cin >> n;
        vector<ll> A(n);
        REP(i, 0, n) {
            cin >> A[i];
        }

        int i = 0, j;
        for(j = 1; j < n; j++) {
            if(A[j] >= A[j-1]) {
                if(j - i > 1) {
                    // cout<<i<<" "<<j<<endl;
                    reverse(A.begin() + i, A.begin() + j);
                    //i = j;
                    break;
                }
                i = j;
            }
        }
        if(j == n && j - i > 1) {
            reverse(A.begin() + i, A.begin() + j);
        }

        bool flag = true;
        for(int i = 1; i < n; i++) {
            if(A[i] < A[i-1]) {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout<<"yes\n"<<i+1<<" "<<j<<endl;
        } else {
            cout<<"no\n";
        }
    return 0;
}