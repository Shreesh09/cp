#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
void init_code()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}
 
int main(void)
{
    init_code();
    int t = 0;
    cin >> t;
    while(t--)
    {
        int l, c;
        string str;
        cin >>  l >> c >> str;

        unordered_map<int,int> mp;
        for(char c : str)
            mp[c-'a']++;

        int nl = l-c;
        int count = 0;
        
        if(nl % 2 == 0) {
            for(int i = 0; i < 26; i++) {
                count = count + mp[i] - (mp[i] % 2);
            }
            if(count >= nl) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            nl--;
             for(int i = 0; i < 26; i++) {
                count = count + mp[i] - (mp[i] % 2);
            }
            if(count >= nl && nl < l) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}