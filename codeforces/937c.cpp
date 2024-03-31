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

void print(int hour, int min) {
   cout<<(hour < 10 ? "0":"")<<hour<<":"<<(min < 10 ? "0":"")<<min;
}
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        ll hour = (str[0]-'0')*10 + (str[1]-'0');
        ll min = (str[3]-'0')*10 + (str[4]-'0');

        if(hour == 0) {
            print(12, min);
            cout<<" AM"<<endl;
            continue;
        }

        if(hour < 12) {
            print(hour, min);
            cout<<" AM"<<endl;
            continue;
        }

        if(hour == 12) {
            print(hour, min);
            cout<<" PM"<<endl;
            continue;
        }

        hour -= 12;
        print(hour, min);
        cout<<" PM"<<endl;
    }
    return 0;
}