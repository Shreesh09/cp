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
        vector<ll> a(n+1);
        REP(i, 1, n+1)
            cin >> a[i];

        vector<vector<ll>> b(n+1);
        bool flag = true;
        REP(i, 1, n+1) {
            b[a[i]].push_back(i);

            if(b[a[i]].size() > 2) {
                flag = false;
                break;
            }
        }

        if(!flag) {
            cout<<"NO\n";
            continue;
        }

        vector<ll> c(n+1, -1), d(n+1, -1), e(n+1, -1), f(n+1, -1);

        for(ll i = 1; i <= n; i++) {
            for(ll x : b[i]) {
                if(e[i] == -1) {
                    c[x] = i;
                    e[i] = x;
                } else if(f[i] == -1) {
                    d[x] = i;
                    f[i] = x;
                }
            }
        }

        for(ll i = n, vp = n, vq = n; i >= 1; i--) {
            for(ll x : b[i]) {
                while(e[vp] != -1) --vp;
                while(f[vq] != -1) --vq;
                if(c[x] == -1 && vp > 0) c[e[vp] = x] = vp;
                if(d[x] == -1 && vq > 0) d[f[vq] = x] = vq;
            }
        }

        for(int i = 1; i <= n; i++) {
            if(max(c[i], d[i]) != a[i]) {
                flag = false;
                break;
            }
        }

        if(!flag) {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        for(ll i = 1; i <= n; i++)
            cout<<c[i]<<" ";
        cout<<endl; 

        for(ll i = 1; i <= n; i++)
            cout<<d[i]<<" ";
        cout<<endl;

    }
    return 0;
}