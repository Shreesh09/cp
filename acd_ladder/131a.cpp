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

string allUp(string str) {
    string ans = "";
    for(char c : str) {
        if(c < 'A' || c > 'Z')
            return "";
        ans += c + 32;
    }
    return ans;
}

string firstSmall(string str) {
    string ans = "";
    if(str[0] < 'a' || str[0] > 'z')
        return "";
    if(str.length() == 1)
        return ans.append(1, str[0]-32);
        
    string rest = allUp(str.substr(1));
    if(rest == "")
        return "";
    ans.append(1, str[0]-32);
    return ans + rest;
}
 
int main(void) {
    init_code();
    string str;
    cin >> str;
    
    string ans;
    if((ans = allUp(str)) != "")
        cout<<ans<<endl;
    else if((ans = firstSmall(str)) != "")
        cout<<ans<<endl;
    else
        cout<<str<<endl;
    
    return 0;
}