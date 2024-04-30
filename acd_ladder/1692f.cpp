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
        vector<ll> A(n);
        map<int,int> mp;
        REP(i, 0, n) {
            ll t;
            cin >> A[i];
            A[i] %= 10;
            mp[A[i]]++;
        }

        bool flag = false;
        for(int i = 0; i <= 9 && !flag; i++) {
            if(mp[i] == 0)
                continue;
            for(int j = 3; j <= 23 && !flag; j += 10) {
                int target = j - i;
                if(target > 18)
                    continue;

                int k = target;
                while(k > 0) {
                    if(mp[i] > 0) {
                        mp[i]--;
                        if(mp[k] > 0) {
                            mp[k]--;
                            if(mp[target-k] > 0) {
                                flag = true;
                                break;
                            } else {
                                mp[k]++;
                                mp[i]++;
                            }
                            
                        } else {
                            mp[i]++;
                        }
                    }
                    k--;
                }
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
    
}