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
    ll n;
    cin >> n;
    map<string, int> mp;
    while(n--) {
        string s;
        cin >> s;
        if(mp[s] == 0) {
            mp[s]++;
            cout<<"OK\n";
        } else {
            string str = s+to_string(mp[s]++);
            mp[str] = 1;
            cout<<str<<"\n";
        }
    }
    return 0;
}