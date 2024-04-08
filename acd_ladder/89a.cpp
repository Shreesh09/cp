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
    string str = "";
    cin >> str;
    set<char> s = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    stack<char> st;
    for(int i = str.length()-1; i >= 0; i--)
        st.push(str[i]);
    
    string ans = "";
    while(!st.empty()) {
        char c = st.top();
        // cout<<c<<endl;
        st.pop();
        if(s.find(c) != s.end())
            continue;
        ans += ".";
        if('A' <= c && c <= 'Z')
            ans.append(1, c+32);
        else
            ans.append(1, c);
    }

    cout<<ans<<endl;
    return 0;
}