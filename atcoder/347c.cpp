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
    
    ll n, a, b;
    cin >> n >> a >> b;
    set<ll> A;
    ll t;
    REP(i, 0, n) {
        cin >> t;
        A.insert(t%(a+b));
    }

    vector<ll> sol;
    sol.insert(sol.begin(), A.begin(), A.end());

    for(int i = 1; i < sol.size(); i++) {
        if((sol[i] - sol[i-1])%(a+b) > b) {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    
    cout<<((sol[sol.size()-1] - sol[0])%(a+b) > b?"Yes":"No")<<endl;
    return 0;
}