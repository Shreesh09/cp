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
        int l;
        string str;
        cin >> l >> str;
        int count = 0;
        string wmap = "";
        int i = 0;
        for(i = 0; i <= l-3; i++) {
            if(str.substr(i, 3) == "map") {
                count++;
                i+=2;
                wmap += " ";
            }
            else {
                wmap += str[i];
            }
        }
        wmap += str.substr(i);

        // cout<<wmap<<endl;
        l = wmap.length();
        for(int i = 0; i <= l-3; i++) {
            if(wmap.substr(i, 3) == "pie") {
                count++;
                i+=2;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}