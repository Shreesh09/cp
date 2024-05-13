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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> adj(n+1);
        vector<ll> indeg(n+1);
        REP(i, 0, m) {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            indeg[u]++;
            indeg[v]++;
        }

        queue<ll> q;
        for(int i = 1; i <= n; i++) {
            if(indeg[i] == 1) {
                q.push(i);
            }
        }

        vector<int> layer(3);
        int d = 0;
        while(!q.empty()) {
            int n = q.size();
            layer[d] = n;

            for(int i = 0; i < n; i++) {
                int node = q.front();
                for(int e : adj[node]) {
                    indeg[e]--;
                    if(indeg[e] == 1) {
                        q.push(e);
                    }
                }
                q.pop();
            }
            d++;
        }

        cout<<layer[1]<<" "<<layer[0]/layer[1]<<endl;
    }
    return 0;
}