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
        if(n%2 == 0) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            vector<pair<int,int>> v(n); int a = 2*n;
            for(int i=0;i<n;i++){
                v[i].first = a--;
            }
            int b = 1;
            for(int i = 0;i<(n/2 + 1);i++){
                v[i].second = b; b+=2;
            }
            int c =2;
            for(int i =(n-n/2);i<n;i++){
                v[i].second = c;
                c+=2;
            }
            for(int i =0;i<n;i++){
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
    }
    return 0;
}