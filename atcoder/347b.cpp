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
    set<string> st;
    for(int i = 0; i < (int)str.length(); i++) {
        for(int j = i; j < (int)str.length(); j++) {
            st.insert(str.substr(i, j-i+1));
        }
    }
    cout<<st.size()<<endl;
    return 0;
}