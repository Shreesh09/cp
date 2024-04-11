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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<int> A(n), B(m);
        map<int,int> fb, fa;

        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> B[i];
            fb[B[i]]++;
            fa[A[i]]++;
        }

        ll match = 0, ans = 0;
        for(auto p : fb) {
            match += min(fa[p.first], p.second);
        }

        if(match >= k)
            ans++;
            
        for(int i = 1; i <= n - m; i++) {
            match -= min(fb[A[i-1]], fa[A[i-1]]);
            fa[A[i-1]]--;
            match += min(fb[A[i-1]], fa[A[i-1]]);
            match -= min(fb[A[i+m-1]], fa[A[i+m-1]]);
            fa[A[i+m-1]]++;
            match += min(fb[A[i+m-1]], fa[A[i+m-1]]);

            if(match >= k)
                ans++;
        }

        cout<<ans<<endl;

    }
    return 0;
}