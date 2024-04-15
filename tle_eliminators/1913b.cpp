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
        string str;
        cin >> str;
        vector<ll> f(2);
        for(char c : str)
            f[c-'0']++;
        
        if(f[0] == f[1]) {
            cout<<0<<endl;
            continue;
        }

        ll cost = 0;
        for(char c : str) {
            if(f[!(c-'0')] == 0) {
                cost = f[0] + f[1];
                break;
            } else {
                f[!(c-'0')]--;
            }
        }

        cout<<cost<<endl;
    }
    return 0;
}