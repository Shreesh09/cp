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
        int n1, n2;
        string s1, s2;
       
        cin >> n1 >> n2;
        cin >> s1 >> s2;


        int count = 0;
        bool found = false;
        int lim = 1;
        while(s1.length() <= s2.length()*2 || !count) {
            int i = 0;
            while(i < s1.length())
            {
                if((i + s2.length() <= s1.length()) && (s1.substr(i, s2.length()) == s2)) {
                    found = true;
                    break;
                }
                i++;
            }
            if(found)
                break;
            s1 = s1 + s1;
            count++;
        }
        

        if(!found)
        {
            int i = 0;
            while(i < s1.length())
            {
                if((i + s2.length() <= s1.length()) && (s1.substr(i, s2.length()) == s2)) {
                    found = true;
                    break;
                }
                i++;
            }
            if(!found) {
                cout<<"-1"<<endl;
                continue;
            }
        }

        cout<<count<<endl;
    }    
    return 0;
}