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
    int n;
    cin >> n;
    vector<int> A(3);
    for(int i = 0; i < n*3; i++) {
        int t;
        cin>>t;
        A[i%3] += t;
    }

    cout<<((A[0] == 0 && A[1] == 0 && A[2] == 0)?"YES":"NO");
    return 0;
}