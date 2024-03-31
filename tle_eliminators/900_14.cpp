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
        bool skip = false;

        if(n%6 == 0 && n%4 == 0) {
            cout<<n/6<<" "<<n/4<<endl;
            continue;
        }

        if(n%6 == 0) {
            cout<<n/6<<" ";
        } else if(n%6 == 2 && n >= 8) {
            cout<<(2 + (n-8)/6)<<" ";
        } else if(n%6 == 4 && n >= 4) {
            cout<<(1 + (n-4)/6)<<" ";
        } else if(n%4 != 0) {
            cout<<-1<<endl;
            skip = true;
        } else {
            cout<<n/4<<" ";
        }
    

        if(skip) {
            continue;
        }
        
        if(n%4 == 0) {
            cout<<n/4<<endl;
        } else if(n%4 == 2 && n >= 6) {
            cout<<(1 + (n-6)/4)<<endl;
        } else if(n%6 != 0) {
            cout<<-1<<endl;
        } else
            cout<<n/6<<endl;

    }
    return 0;
}