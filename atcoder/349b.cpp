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
    string str;
    cin >> str;
    map<char,int> mp;
    map<int,int> f;
    for(char c : str)
        mp[c]++;
    
    for(auto p : mp) {
        f[p.second]++;
    }

    for(int i = 1; i <= (int)str.length(); i++) {
        if(f[i] != 0 && f[i] != 2) {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}