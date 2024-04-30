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
        ll n, sum = 0;
        cin >> str >> n;
        multiset<int, greater<int>> st;
        REP(i, 0, str.length()) {
            st.insert(str[i] - 'a' + 1);
            sum += str[i] - 'a' + 1;
        }
        
        ll d = sum - n;
        while(!st.empty() && d > 0) {
            d -= *st.begin();
            st.erase(st.begin());
        }

        string ans = "";
        REP(i, 0, str.length()) {
            multiset<int>::iterator p;
            if((p = st.find(str[i]-'a'+1)) != st.end()) {
                ans += str[i];
                st.erase(p);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}