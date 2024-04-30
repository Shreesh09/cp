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
        string str;
        cin >> str;
        vector<ll> A(n), B(n);
        set<char> unique;
        A[0] = 1;
        unique.insert(str[0]);
        for(int i = 1; i < n; i++) {
            if(unique.find(str[i]) == unique.end()) {
                A[i] = A[i-1] + 1;
                unique.insert(str[i]);
            } else {
                A[i] = A[i-1];
            }
        }

        unique.clear();
        B[n-1] = 1;
        unique.insert(str[n-1]);
        for(int i = n-2; i >= 0; i--) {
            if(unique.find(str[i]) == unique.end()) {
                B[i] = B[i+1] + 1;
                unique.insert(str[i]);
            } else {
                B[i] = B[i+1];
            }
        }

        ll maxSum = 0;
        for(int i = 0; i < n-1; i++) {
            maxSum = max(maxSum, A[i] + B[i+1]);
        }

        cout<<maxSum<<endl;

    }
    return 0;
}