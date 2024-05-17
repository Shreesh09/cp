#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long ll;
 
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
    vector<int> a(n);
    for(auto &v : a) cin >> v;
    sort(a.begin(), a.end());
    int r = n;
    ll cnt = 0, res = 0;
    for(int i = 0; i < n; i++) {
        r = max(r, i + 1);
        while(r - 1 > i and a[r - 1] + a[i] >= 100000000) {
        r--;
        }
        cnt += n - r;
    }
    for(int i = 0; i < n; i++) res += ll(a[i]) * (n - 1);
    res -= cnt * 100000000;
    cout << res << endl;
    return 0;
}