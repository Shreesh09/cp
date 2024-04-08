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

void gen(int i, string num, vector<ll>& lucky) {
    if(i >= 3) {
        if(stoi(num) != 0)
            lucky.push_back(stoi(num));
        return;
    }
    
    if(i == 0 || num[i-1] == '0')
        gen(i+1, num+"0", lucky);
    gen(i+1, num+"4", lucky);
    gen(i+1, num+"7", lucky);
}
 
int main(void) {
    init_code();
    ll n;
    cin >> n;
    vector<ll> lucky;
    gen(0, "", lucky);
    
    while(n > 1) {
        bool flag = false;
        for(int i : lucky) {
            if(n%i == 0) {
                n /= i;
                flag = true;
            }
        }
        if(!flag)
            break;
    }

    cout<<(n == 1?"YES":"NO")<<endl;
    return 0;
}