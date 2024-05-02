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
    ll n;
    cin >> n;
    vector<ll> A(n);
    vector<int> c(2);
    int odd, even;
    REP(i, 0, n) {
        cin >> A[i];
        if(A[i]%2 == 0)
            even = i;
        else
            odd = i;
        c[A[i]%2]++;
    }

    if(c[0] == 1)
        cout<<even+1<<endl;
    else
        cout<<odd+1<<endl;

    return 0;
}