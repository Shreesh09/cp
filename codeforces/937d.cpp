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
    ll lim = pow(2, 5);
    vector<int> fac(1e5+1);

    for(ll i = 1; i <= lim; i++) {
        int num = stoi(bitset<64>(i).to_string());
        fac[num] = 1;
    }

    for(int i = 0; i <= 1e5; i++) {
        if(fac[i] == 0)
            continue;
        for(ll j = 2; j <= lim; j++){
            int num2 = stoi(bitset<64>(j).to_string());
            if(i * num2 > 1e5)
                break;
            fac[i*num2] = 1;
        }
    }


    while(t--) {
        ll n;
        cin >> n;
        if(fac[n]) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}