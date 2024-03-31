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
        cin >> n;
        if(n == 1) {
            cout<<"##\n##"<<endl;
            continue;
        }

        for(int i = 0; i < n; i++) {
            char start;
            if(i%2 == 0)
                start = '#';
            else
                start = '.';
            string str= "";
            for(int j = 0; j < n; j++) {
                str += start;
                str += start;
                if(start == '#')
                    start = '.';
                else
                    start = '#';
            }
            cout<<str<<endl<<str<<endl;
        }
        // cout<<endl;
    }
    return 0;
}