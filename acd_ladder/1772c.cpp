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
        ll k, n;
        cin >> k >> n;
        vector<int> vis(n+1);
        int c = 0, i, count = 0;
        string ans = "";
        for(i = 1; i <= n && c < k; i += c) {
            vis[i] = 1;
            c++;
        }

        for(int i = n; i >= 0; i--) {
            if(vis[i]) {
                ans = to_string(i) + " " + ans;
            } else if(c < k && !vis[i]) {
                c++;
                ans = to_string(i) + " " + ans;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}