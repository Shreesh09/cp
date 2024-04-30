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
        map<string, int> mp;

        bool flag = false;
        for(int i = 1; i < n-2; i++) {
            mp[str.substr(i-1, 2)]++;
            if(mp.find(str.substr(i+1,2)) != mp.end()) {
                flag = true;
                break;
            }
        }

        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}