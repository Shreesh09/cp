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
        bool isAllZero = true;
        REP(i, 0, n) {
            cin >> A[i];
            isAllZero = A[i] == 0 && isAllZero;
        }

        if(isAllZero) {
            cout<<0<<endl;
            continue;
        }

        int i = 0;
        while(i < n && A[i] == 0)
            i++;
        
        int j = n-1;
        while(j >= 0 && A[j] == 0)
            j--;

        int count = 1;
        while(i <= j) {
            if(A[i] == 0) {
                count = 2;
                break;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}