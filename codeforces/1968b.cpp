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
        ll na, nb;
        cin >> na >> nb;
        string a, b;
        cin >> a >> b;

        int i = 0, j = 0;

        for(i = 0; i < na; i++) {
            while(j < nb && a[i] != b[j]) {
                j++;
            }
            if(j == nb)
                break;
            j++;
        }

        cout<<i<<endl;
    }
    return 0;
}