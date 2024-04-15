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
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        ll count = 0, minCount = k;
        ll i = 0, j;
        for(j = 0; j < k; j++) {
            if(str[j] == 'W')
                count++;
        }
        
        minCount = min(minCount, count);

        for(j; j < str.length(); j++) {
            count -= str[i] == 'W';
            i++;
            count += str[j] == 'W';
            minCount = min(minCount, count);
            // cout<<i<<" "<<j<<endl;
        }
        cout<<minCount<<endl;
    }
    return 0;
}