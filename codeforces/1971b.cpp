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
        ll n = str.length();
        if(n == 1) {
            cout<<"NO\n";
            continue;
        }

        char c = str[0];
        ll i = 0;
        while(i < n && str[i] == c) {
            i++;
        }

        if(i == n) {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        swap(str[0], str[i]);
        cout<<str<<endl;
    }
    return 0;
}