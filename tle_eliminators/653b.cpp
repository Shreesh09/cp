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
            cout<<0<<endl;
            continue;
        }

        ll count3 = 0, count2 = 0;

        while(n > 1) {
            if(n%3 == 0) {
                count3++;
                n /= 3;
            } else if(n%2 == 0) {
                count2++;
                n /= 2;
            } else {
                break;
            }
        } 

        if(n > 1 || count2 > count3) {
            cout<<-1<<endl;
            continue;
        }

        cout<<(count3-count2+max(count3,count2))<<endl;

    }
    return 0;
}