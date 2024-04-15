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
        char c;
        cin >> n >> c;
        string str;
        cin >> str;

        set<int> Gs;
        vector<int> Cs;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == c)
                Cs.push_back(i);
            if(str[i] == 'g')
                Gs.insert(i);
        }

        ll maxD = 0;
        for(int c : Cs) {
            auto upp = Gs.lower_bound(c);
            if(upp != Gs.end()) {
                maxD = max(maxD, (ll)(*upp - c));
            } else if(*Gs.begin() < c) {
                maxD = max(maxD, (ll)(*Gs.begin() + n - c));
            }
        }

        cout<<maxD<<endl;

    }
    return 0;
}