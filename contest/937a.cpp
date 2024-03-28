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
        ll a, b, c;
        cin >> a >> b >> c;
        
        if(a < b && b < c)
            cout<<"STAIR";
        else if(a < b && b > c)
            cout<<"PEAK";
        else
            cout<<"NONE";
        cout<<endl;
    }
    return 0;
}